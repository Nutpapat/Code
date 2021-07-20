/*
    TellerGUI Class
 */

package lab05;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import lab04.Account;

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

        // Components Settings
        tf1.setEditable(false);
        tf2.requestFocus();

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
}
