/*
    Chat Class
 */

package lab05;

import java.awt.*;
import javax.swing.*;

public class Chat {
    private JFrame fr;
    private JPanel p1, p2;
    private JTextArea ta;
    private JTextField tf;
    private JButton submit, cancel, exit;

    public Chat() {
        // Main Method
        // Components Creation
        fr = new JFrame("Chat Program");
        p1 = new JPanel();
        p2 = new JPanel();
        ta = new JTextArea();
        tf = new JTextField();
        submit = new JButton("Submit");
        cancel = new JButton("Cancel");
        exit = new JButton("Exit");

        // Components Settings
        ta.setEditable(false);
        tf.setBackground(Color.green);

        // Panel #1
        p1.setLayout(new BorderLayout());
        p1.add(ta);
        p1.add(tf, BorderLayout.SOUTH);

        // Panel #2
        p2.add(submit);
        p2.add(cancel);
        p2.add(exit);

        // Add Components to Frame
        fr.add(p1, BorderLayout.CENTER);
        fr.add(p2, BorderLayout.SOUTH);
    }

    public void run() {
        fr.setSize(400, 250);
        fr.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        fr.setLocationRelativeTo(null);
        fr.setVisible(true);
    }

    public static void main(String[] args) {
        Chat program = new Chat();
        program.run();
    }
}
