package lab07;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class PreCalculatorGUI {
    private JFrame frame;
    private JPanel boxPanel, buttonPanel;
    private JLabel numLabel1, numLabel2, resultLabel;
    private JTextField numField1, numField2, resultField;
    private JButton add, subtract, multiply, divide;

    public PreCalculatorGUI() {
        frame = new JFrame("Pre-Calculator");
        boxPanel = new JPanel();
        buttonPanel = new JPanel();

        numLabel1 = new JLabel("Number 1");
        numLabel2 = new JLabel("Number 2");
        resultLabel = new JLabel("Result");

        numField1 = new JTextField(6);
        numField2 = new JTextField(6);
        resultField = new JTextField(12);
        resultField.setEditable(false);

        add = new JButton("Add");
        subtract = new JButton("Subtract");
        multiply = new JButton("Multiply");
        divide = new JButton("Divide");

        boxPanel.add(numLabel1);
        boxPanel.add(numField1);
        boxPanel.add(numLabel2);
        boxPanel.add(numField2);
        boxPanel.add(resultLabel);
        boxPanel.add(resultField);

        buttonPanel.add(add);
        buttonPanel.add(subtract);
        buttonPanel.add(multiply);
        buttonPanel.add(divide);

        add.addActionListener(new ButtonListener());
        subtract.addActionListener(new ButtonListener());
        multiply.addActionListener(new ButtonListener());
        divide.addActionListener(new ButtonListener());

        frame.add(boxPanel);
        frame.add(buttonPanel, BorderLayout.SOUTH);

        frame.pack();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
    }

    private class ButtonListener implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            if (e.getSource() == add) {
                resultField.setText(Double.toString(Double.parseDouble(numField1.getText()) + Double.parseDouble(numField2.getText())));
            }
            else if (e.getSource() == subtract) {
                resultField.setText(Double.toString(Double.parseDouble(numField1.getText()) - Double.parseDouble(numField2.getText())));
            }
            else if (e.getSource() == multiply) {
                resultField.setText(Double.toString(Double.parseDouble(numField1.getText()) * Double.parseDouble(numField2.getText())));
            }
            else if (e.getSource() == divide) {
                resultField.setText(Double.toString(Double.parseDouble(numField1.getText()) / Double.parseDouble(numField2.getText())));
            }
        }
    }

    public static void main(String[] args) {
        PreCalculatorGUI program = new PreCalculatorGUI();
    }
}
