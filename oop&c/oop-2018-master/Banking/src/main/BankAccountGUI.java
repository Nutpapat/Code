package main;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class BankAccountGUI extends BankAccount {
	public static final String[] ACTION_LIST = {"Deposit", "Withdraw", "Transfer"};
	private JFrame frame;
	private JPanel infoPanel, menuPanel;
	private JLabel nameLabel, actionLabel, balanceLabel, amountLabel, receiverLabel;
	private JComboBox action;
	private JTextField balanceField, amountField, receiverField;
	private JButton proceed, cancel, exit;
	
	public BankAccountGUI(BankAccount account) {
		// Constructor
		super(account.getId(), account.getName(), account.getBalance());
	}
	
	public void build() {
		// Build GUI
		frame = new JFrame("Bank Account Program");
		infoPanel = new JPanel(new GridLayout(4, 2));
		menuPanel = new JPanel(new GridLayout(1, 3));
		
		nameLabel = new JLabel(this.getName());
		actionLabel = new JLabel("Action:");
		balanceLabel = new JLabel("Balance:");
		amountLabel = new JLabel("Amount:");
		receiverLabel = new JLabel("Receiver ID:");
		
		nameLabel.setHorizontalAlignment(0);
		
		action = new JComboBox(ACTION_LIST);
		balanceField = new JTextField(Double.toString(this.getBalance()));
		amountField = new JTextField();
		receiverField = new JTextField();
		
		proceed = new JButton("Proceed");
		cancel = new JButton("Cancel");
		exit = new JButton("Exit");
		
		proceed.addActionListener(new MyButtonListener());
		cancel.addActionListener(new MyButtonListener());
		exit.addActionListener(new MyButtonListener());
		
		infoPanel.add(actionLabel);
		infoPanel.add(action);
		infoPanel.add(balanceLabel);
		infoPanel.add(balanceField);
		infoPanel.add(amountLabel);
		infoPanel.add(amountField);
		infoPanel.add(receiverLabel);
		infoPanel.add(receiverField);
		
		menuPanel.add(proceed);
		menuPanel.add(cancel);
		menuPanel.add(exit);
		
		frame.add(nameLabel, BorderLayout.NORTH);
		frame.add(infoPanel);
		frame.add(menuPanel, BorderLayout.SOUTH);
	}
	
	public void run() {
		// Run Program
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setLocationRelativeTo(null);
		frame.setSize(300, 175);
		frame.setVisible(true);
	}

	private class MyButtonListener implements ActionListener {
		public void actionPerformed(ActionEvent e) {
			if (e.getSource() == proceed) {
				
			}
			else if (e.getSource() == cancel) {
				
			}
			else if (e.getSource() == exit) {
				if (JOptionPane.showConfirmDialog(null, "Are you sure you want to log out?") == 0) {
					frame.setVisible(false);
				}
			}
		}
	}
}
