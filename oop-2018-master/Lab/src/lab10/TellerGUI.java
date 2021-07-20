/*
    TellerGUI Class
 */

package lab10;

import lab04.Account;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.File;

public class TellerGUI extends Account {
    private JFrame fr;
    private JPanel p1, p2, p3;
    private JLabel l1, l2, err;
    private JTextField tf1, tf2;
    private JButton bn1, bn2, bn3;

    public TellerGUI() {
    }

    public TellerGUI(double amount) {
        super(amount);
    }

    public void init() {
        // Additional File Reading
        File f = new File("Customer.dat");
        if (f.exists()) {
            balance = CustomerStorage.getBalance();
        } else {
            balance = 4000;
        }

        // Components Creation
        fr = new JFrame();

        p1 = new JPanel(new GridLayout(2, 2));
        p2 = new JPanel();
        p3 = new JPanel(new BorderLayout());

        l1 = new JLabel("Balance:");
        l2 = new JLabel("Amount:");
        err = new JLabel();

        tf1 = new JTextField(Double.toString(balance));
        tf2 = new JTextField();

        bn1 = new JButton("Deposit");
        bn2 = new JButton("Withdraw");
        bn3 = new JButton("Exit");

        bn1.addActionListener(new AccountEvents());
        bn2.addActionListener(new AccountEvents());
        bn3.addActionListener(new AccountEvents());

        // Components Settings
        tf1.setEditable(false);
        tf2.requestFocus();
        err.setHorizontalAlignment(JLabel.CENTER);
        err.setForeground(Color.RED);

        // Panel #1 Components Adding
        p1.add(l1);
        p1.add(tf1);
        p1.add(l2);
        p1.add(tf2);

        // Panel #2 Components Adding
        p2.add(bn1);
        p2.add(bn2);
        p2.add(bn3);

        // Panel #3 Components Adding
        p3.add(p1);
        p3.add(p2, BorderLayout.SOUTH);

        // Frame Components Adding
        fr.add(p3, BorderLayout.CENTER);
        fr.add(err, BorderLayout.SOUTH);

        // Frame Settings
        fr.setTitle("Bank");
        fr.setFont(new Font("Dialog", Font.BOLD, 14));
        fr.setSize(300, 150);
        fr.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        fr.setLocationRelativeTo(null);
        fr.setVisible(true);
    }

    private void checkValidInput(boolean isWithdraw) {
        try {
            if (Double.parseDouble(tf2.getText()) < 0) {
                updateErrorMessage(2);
            } else if (isWithdraw && Double.parseDouble(tf2.getText()) > Double.parseDouble(tf1.getText())) {
                updateErrorMessage(1);
            } else {
                updateErrorMessage(0);
            }
        } catch (Exception ex) {
            updateErrorMessage(2);
        }
    }

    private void updateErrorMessage(int status) {
        if (status == 0) {
            err.setText("");
            fr.setSize(300, 150);
        } else if (status == 1) {
            err.setText("Not Enough Money!");
            fr.setSize(300, 165);
        } else if (status == 2) {
            err.setText("Invalid Amount!");
            fr.setSize(300, 165);
        }
    }

    private class AccountEvents implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            if (e.getSource() == bn1) {
                checkValidInput(false);
                deposit(Double.parseDouble(tf2.getText()));
                tf1.setText(Double.toString(balance));
                tf2.setText("");
            } else if (e.getSource() == bn2) {
                checkValidInput(true);
                withdraw(Double.parseDouble(tf2.getText()));
                tf1.setText(Double.toString(balance));
                tf2.setText("");
            } else if (e.getSource() == bn3) {
                CustomerStorage.saveBalance(balance);
                System.exit(0);
            }
        }
    }
}
