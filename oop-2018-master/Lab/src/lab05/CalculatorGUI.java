package lab05;

import java.awt.*;
import javax.swing.*;

public class CalculatorGUI {
    private JFrame frame;
    private JPanel panel;
    private JButton[][] buttons;
    private JTextField display;

    public CalculatorGUI() {
        frame = new JFrame("Calculator");
        panel = new JPanel(new GridLayout(4, 4));
        buttons = new JButton[4][4];
        display = new JTextField();

        buttons[0][0] = new JButton("7");
        buttons[0][1] = new JButton("8");
        buttons[0][2] = new JButton("9");
        buttons[0][3] = new JButton("+");
        buttons[1][0] = new JButton("4");
        buttons[1][1] = new JButton("5");
        buttons[1][2] = new JButton("6");
        buttons[1][3] = new JButton("-");
        buttons[2][0] = new JButton("1");
        buttons[2][1] = new JButton("2");
        buttons[2][2] = new JButton("3");
        buttons[2][3] = new JButton("*");
        buttons[3][0] = new JButton("0");
        buttons[3][1] = new JButton(".");
        buttons[3][2] = new JButton("=");
        buttons[3][3] = new JButton("/");

        for (short i = 0; i < 4; i++)
            for (short j = 0; j < 4; j++)
                panel.add(buttons[i][j]);

        frame.add(display, BorderLayout.NORTH);
        frame.add(panel);

        frame.setSize(200, 300);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLocationRelativeTo(null);
    }

    public static void main(String[] args) {
        CalculatorGUI program = new CalculatorGUI();
    }
}
