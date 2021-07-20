package lab07;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class CalculatorGUI {
    public static final String[][] BUTTON_KEYS = {{"7", "8", "9", "+"},
                                                  {"4", "5", "6", "-"},
                                                  {"1", "2", "3", "*"},
                                                  {"0", ".", "=", "/"}};
    private String data, buffer, operation;
    private int status; // 0: New ; 1: Waiting ; 2: Finished (Reset-able)
    private JFrame frame;
    private JPanel panel;
    private JButton[][] buttons;
    private JTextField display;

    public CalculatorGUI() {
        data = "";
        buffer = "";
        operation = "";
        status = 0;

        frame = new JFrame("Calculator");
        panel = new JPanel(new GridLayout(4, 4));
        buttons = new JButton[4][4];
        display = new JTextField("0");

        for (short i = 0; i < 4; i++) {
            for (short j = 0; j < 4; j++) {
                buttons[i][j] = new JButton(BUTTON_KEYS[i][j]);
                buttons[i][j].addActionListener(new MyActionListener());
                buttons[i][j].setFont(new Font("Arial", Font.PLAIN, 20));
                panel.add(buttons[i][j]);
            }
        }

        display.setHorizontalAlignment(JTextField.RIGHT);
        display.setEditable(false);
        display.setFont(new Font("Arial", Font.PLAIN, 32));
        display.addKeyListener(new MyKeyListener());

        frame.add(display, BorderLayout.NORTH);
        frame.add(panel);
    }

    private void run() {
        frame.setSize(200, 300);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLocationRelativeTo(null);
    }

    private void nextAction(String clicked) {
        if (clicked.equals("=")) {
            if (buffer.equals("")) {
                buffer = data;
            }
            doOperation();
            updateText(0);
            status = 2;
        } else if (clicked.equals("+") || clicked.equals("-") || clicked.equals("*") || clicked.equals("/")) {
            if (status == 1 && !buffer.equals("")) {
                doOperation();
                updateText(0);
            }
            buffer = "";
            operation = clicked;
            status = 1;
        } else {
            if (status == 2) {
                data = "";
                status = 0;
            }

            if (checkValid(clicked)) {
                if (status == 0) {
                    data += clicked;
                    updateText(0);
                } else {
                    buffer += clicked;
                    updateText(1);
                    status = 1;
                }
            }
        }
        showDebugLog();
    }

    private void doOperation() {
        status = 2;

        switch (operation) {
            case "+":
                data = Double.toString(Double.parseDouble(data) + Double.parseDouble(buffer));
                break;
            case "-":
                data = Double.toString(Double.parseDouble(data) - Double.parseDouble(buffer));
                break;
            case "*":
                data = Double.toString(Double.parseDouble(data) * Double.parseDouble(buffer));
                break;
            case "/":
                data = Double.toString(Double.parseDouble(data) / Double.parseDouble(buffer));
                break;
        }
    }

    private void updateText(int mode) {
        if (mode == 0) {
            display.setText(data);
        } else if (mode == 1) {
            display.setText(buffer);
        }
    }

    private boolean checkValid(String clicked) {
        if (status == 0 && clicked.equals(".") && data.contains(".")) {
            return false;
        }
        return !(status == 1 && clicked.equals(".") && buffer.contains("."));
    }

    private void showDebugLog() {
        System.out.println("[Data]      " + data);
        System.out.println("[Buffer]    " + buffer);
        System.out.println("[Operation] " + operation);

        if (status == 0)
            System.out.println("[Status]    Initial (0)");
        else if (status == 1)
            System.out.println("[Status]    Waiting (1)");
        else if (status == 2)
            System.out.println("[Status]    Finished (2)");

        System.out.println();
    }

    private class MyActionListener implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            for (short i = 0; i < 4; i++) {
                for (short j = 0; j < 4; j++) {
                    if (e.getSource() == buttons[i][j]) {
                        nextAction(buttons[i][j].getText());
                    }
                }
            }
        }
    }

    private class MyKeyListener implements KeyListener {
        @Override
        public void keyReleased(KeyEvent e) {
        }

        @Override
        public void keyPressed(KeyEvent e) {
            if (e.getKeyCode() == KeyEvent.VK_ENTER) {
                nextAction("=");
            }
            else if (e.getKeyCode() == '+') {
                nextAction("+");
            }
            else if (e.getKeyCode() == '-') {
                nextAction("-");
            }
            else if (e.getKeyCode() == KeyEvent.VK_X || e.getKeyCode() == '*') {
                nextAction("*");
            }
            else if (e.getKeyCode() == KeyEvent.VK_SLASH) {
                nextAction("/");
            }
            else {
                try {
                    nextAction(Integer.toString(Integer.parseInt(Character.toString((char)e.getKeyCode()))));
                }
                catch (Exception ex) {

                }
            }
        }

        @Override
        public void keyTyped(KeyEvent e) {
        }
    }

    public static void main(String[] args) {
        CalculatorGUI program = new CalculatorGUI();
        program.run();
    }
}
