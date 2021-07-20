package demo;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class CountryGUI extends CountryUtil {
	private JFrame frame;
	private JLabel countryLabel, capitalLabel;
	private JComboBox<?> countryBox;
	private JTextField capitalBox;
	
	public CountryGUI() {
		// Constructor
	}
	
	public void init() {
		// Instance Method: Run Program
		frame = new JFrame("Find the Capital City");
		countryLabel = new JLabel("Country:");
		capitalLabel = new JLabel("Capital City:");
		countryBox = new JComboBox<>(CountryUtil.COUNTRY_LIST);
		capitalBox = new JTextField();
		
		countryBox.addActionListener(new MyActionListener());
		capitalBox.setEditable(false);
		countryLabel.setHorizontalAlignment(JLabel.CENTER);
		capitalLabel.setHorizontalAlignment(JLabel.CENTER);
		
		frame.setLayout(new GridLayout(2, 2));
		frame.add(countryLabel);
		frame.add(countryBox);
		frame.add(capitalLabel);
		frame.add(capitalBox);
		
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setSize(350, 100);
		frame.setLocationRelativeTo(null);
		frame.setVisible(true);
	}
	
	private class MyActionListener implements ActionListener {
		// Inner Class: ActionListener implemented
		public void actionPerformed(ActionEvent e) {
			capitalBox.setText(getCapitalCity(countryBox.getSelectedItem().toString()));
		}
	}
	
	public static void main(String[] args) {
		// Main Method
		CountryGUI program = new CountryGUI();
		program.init();
	}
}
