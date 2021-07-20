package main;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class BankRegisterGUI extends BankRegister {
	private JFrame frame;
	private JPanel infoPanel, menuPanel;
	private JLabel idLabel, nameLabel;
	private JTextField idField, nameField, balanceField;
	private JButton register, cancel, exit;
	
	public BankRegisterGUI() {
		// Constructor
	}
	
	public void build() {
		// Build GUI
		frame = new JFrame("Bank Register Program");
		infoPanel = new JPanel(new GridLayout(2, 2));
		menuPanel = new JPanel(new GridLayout(1, 3));
		
		idLabel = new JLabel("ID:");
		nameLabel = new JLabel("Name:");
		
		idField = new JTextField();
		nameField = new JTextField();
		
		register = new JButton("Register");
		cancel = new JButton("Cancel");
		exit = new JButton("Exit");
		
		register.addActionListener(new MyButtonListener());
		cancel.addActionListener(new MyButtonListener());
		exit.addActionListener(new MyButtonListener());
		
		infoPanel.add(idLabel);
		infoPanel.add(idField);
		infoPanel.add(nameLabel);
		infoPanel.add(nameField);
		
		menuPanel.add(register);
		menuPanel.add(cancel);
		menuPanel.add(exit);
		
		frame.add(infoPanel);
		frame.add(menuPanel, BorderLayout.SOUTH);
	}
	
	public void run() {
		// Run Program
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setLocationRelativeTo(null);
		frame.setSize(300, 125);
		frame.setVisible(true);
	}
	
	public void clearTextField() {
		idField.setText("");
		nameField.setText("");
	}
	
	public BankRegister requestAccountUpdate() {
		return this;
	}
	
	private class MyButtonListener implements ActionListener {
		public void actionPerformed(ActionEvent e) {
			if (e.getSource() == register) {
				database.add(new BankAccount(idField.getText(), nameField.getText(), 0));
				clearTextField();
				debug();
			}
			else if (e.getSource() == cancel) {
				clearTextField();
			}
			else if (e.getSource() == exit) {
				if (JOptionPane.showConfirmDialog(null, "Are you sure you want to exit?") == 0) {
					System.exit(0);
				}
			}
		}
	}
}
