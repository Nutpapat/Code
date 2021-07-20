package main;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class BankProgram {
	private BankRegisterGUI registerProgram;
	private BankAccountGUI accountWindow;
	private JFrame frame;
	private JPanel infoPanel, menuPanel;
	private JLabel idLabel, passwordLabel;
	private JTextField idField, passwordField;
	private JButton login, exit;
	
	public BankProgram() {
	}
	
	public void build() {
		registerProgram = new BankRegisterGUI();
		registerProgram.build();
		
		frame = new JFrame("Bank Login Program");
		infoPanel = new JPanel(new GridLayout(2, 2));
		menuPanel = new JPanel(new GridLayout(1, 2));
		
		idLabel = new JLabel("ID:");
		passwordLabel = new JLabel("Password:");
		
		idField = new JTextField();
		passwordField = new JTextField();
		
		login = new JButton("Login");
		exit = new JButton("Exit");
		
		login.addActionListener(new MyButtonListener());
		exit.addActionListener(new MyButtonListener());
		
		infoPanel.add(idLabel);
		infoPanel.add(idField);
		infoPanel.add(passwordLabel);
		infoPanel.add(passwordField);
		
		menuPanel.add(login);
		menuPanel.add(exit);
		
		frame.add(infoPanel);
		frame.add(menuPanel, BorderLayout.SOUTH);
	}
	
	public void run() {
		registerProgram.run();
		
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setLocationRelativeTo(null);
		frame.setSize(300, 125);
		frame.setVisible(true);
	}
	
	private class MyButtonListener implements ActionListener {
		public void actionPerformed(ActionEvent e) {
			if (e.getSource() == login) {
				if (registerProgram.getBankAccount(idField.getText()) != null) {
					accountWindow = new BankAccountGUI(registerProgram.getBankAccount(idField.getText()));
					accountWindow.build();
					accountWindow.run();
					idField.setText("");
					passwordField.setText("");
				}
				else {
					JOptionPane.showMessageDialog(null, "Invalid ID or Password.");
				}
			}
			else if (e.getSource() == exit) {
				if (JOptionPane.showConfirmDialog(null, "Are you sure you want to exit?") == 0) {
					System.exit(0);
				}
			}
		}
	}
}
