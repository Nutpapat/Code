package lab08;

import javax.swing.*;
import javax.swing.border.Border;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;

import lab04.*;

public class CustomerGUI implements ActionListener , ItemListener {
    private JFrame fr;
    private JPanel p1, p2, p3;
    private JLabel l1, l2, err;
    private JTextField tf1, tf2;
    private JButton bn1, bn2, bn3;
    private Account acct, acct2, acct3;
    private JComboBox cb;

    public void init() {
        fr = new JFrame("Bank");
        acct = new CheckingAccount(6000, 500);
        acct2 = new CheckingAccount(4000, 400);
        acct3 = new CheckingAccount(3000, 300);

        fr.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        p1 = new JPanel();
        p2 = new JPanel();
        p3 = new JPanel();

        cb = new JComboBox();
        cb.addItem("Account 1");
        cb.addItem("Account 2");
        cb.addItem("Account 3");

        cb.addActionListener(this);

        cb.addItemListener(this);

        l1 = new JLabel("Balance");
        l2 = new JLabel("Amount");

        err = new JLabel(" ", SwingConstants.CENTER);
        err.setForeground(Color.RED);

        tf1 = new JTextField(Double.toString(acct.getBalance()));
        tf2 = new JTextField();

        bn1 = new JButton("Deposit");
        bn2 = new JButton("Withdraw");
        bn3 = new JButton("Exit");

        bn1.addActionListener(this);
        bn2.addActionListener(this);
        bn3.addActionListener(this);

        fr.setFont(new Font("Dialog", Font.BOLD, 14));

        fr.add(cb, BorderLayout.NORTH);

        p1.setLayout(new GridLayout(2,2));
        p1.add(l1);
        p1.add(tf1);
        p1.add(l2);
        p1.add(tf2);

        p2.add(bn1);
        p2.add(bn2);
        p2.add(bn3);

        p3.setLayout(new BorderLayout());
        p3.add(p1, BorderLayout.CENTER);

        p3.add(p2, BorderLayout.SOUTH);
        fr.add(p3, BorderLayout.CENTER);
        fr.add(err, BorderLayout.SOUTH);
        tf1.setEditable(false);
        fr.setSize(300, 300);

        fr.pack();
        fr.setVisible(true);
        tf2.requestFocus();
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        double amt = Double.parseDouble(tf2.getText());
        String cmd  = e.getActionCommand();
        if (cmd.equals("Exit")){
            System.exit(0);

        }
        if (cb.getSelectedIndex() == 0){
            tf1.setText(acct.getBalance() + "");
        }else if (cb.getSelectedIndex() == 1){
            tf1.setText(acct2.getBalance() + "");
        }else if (cb.getSelectedIndex() == 2){
            tf1.setText(acct3.getBalance() + "");
        }
        if (amt < 0) {
            err.setText("Invalid Amount");
        }
        else if (cmd.equals("Withdraw")){
            if (cb.getSelectedIndex() == 0){
                if (amt <= acct.getBalance()) {
                    acct.withdraw(amt);
                    tf1.setText(acct.getBalance() + "");
                    err.setText("");
                }else{
                    err.setText("Not Enough Money");
                }
            }
            if (cb.getSelectedIndex() == 1){
                if (amt <= acct2.getBalance()) {
                    acct2.withdraw(amt);
                    tf1.setText(acct2.getBalance() + "");
                    err.setText("");
                }else{
                    err.setText("Not Enough Money");
                }
            }
            if (cb.getSelectedIndex() == 2){
                if (amt <= acct3.getBalance()) {
                    acct3.withdraw(amt);
                    tf1.setText(acct3.getBalance() + "");
                    err.setText("");
                } else{
                    err.setText("Not Enough Money");
                }
            }

        }
        else if (cmd.equals("Deposit")){
            if (cb.getSelectedIndex() == 0){
                if (amt <= acct.getBalance()) {
                    acct.deposit(amt);
                    tf1.setText(acct.getBalance() + "");

                    err.setText("");
                }else{
                    err.setText("Not Enough Money");
                }
            }
            if (cb.getSelectedIndex() == 1){
                if (amt <= acct2.getBalance()) {
                    acct2.deposit(amt);
                    tf1.setText(acct2.getBalance() + "");
                    err.setText("");
                }else{
                    err.setText("Not Enough Money");
                }
            }
            if (cb.getSelectedIndex() == 2){
                if (amt <= acct3.getBalance()) {
                    acct3.deposit(amt);
                    tf1.setText(acct3.getBalance() + "");
                    err.setText("");
                } else{
                    err.setText("Not Enough Money");
                }
            }

        }


    }

    public static void main(String[] args) {
        CustomerGUI  i = new CustomerGUI();
        i.init();
    }

    @Override
    public void itemStateChanged(ItemEvent e) {
//        int cmd = e.getStateChange();
//        System.out.print(cmd);
    }
}