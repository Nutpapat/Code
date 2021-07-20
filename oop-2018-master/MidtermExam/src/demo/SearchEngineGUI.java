package demo;

import java.awt.*;
import javax.swing.*;

public class SearchEngineGUI {
	private JFrame frame;
	private JPanel searchPanel, radioButtonPanel, resultPanel;
	private JTextField searchField;
	private ButtonGroup buttonGroup;
	private JRadioButton yahoo, google;
	private JButton go;
	private JTextArea textArea;
	private JScrollPane scrollPane;
	
	public SearchEngineGUI() {
		// Constructor
	}
	
	public void init() {
		// Instance Method: Run Program
		frame = new JFrame("Search Engine");
		searchPanel = new JPanel(new BorderLayout());
		radioButtonPanel = new JPanel();
		resultPanel = new JPanel(new BorderLayout());
		searchField = new JTextField(16);
		buttonGroup = new ButtonGroup();
		yahoo = new JRadioButton("Yahoo");
		google = new JRadioButton("Google");
		go = new JButton("GO!");
		textArea = new JTextArea();
		scrollPane = new JScrollPane(textArea);
		
		google.setSelected(true);
		
		searchPanel.add(new JLabel(" Search "), BorderLayout.WEST);
		searchPanel.add(searchField);
		searchPanel.add(go, BorderLayout.EAST);
		
		buttonGroup.add(yahoo);
		buttonGroup.add(google);
		
		radioButtonPanel.add(yahoo);
		radioButtonPanel.add(google);
		
		resultPanel.add(scrollPane);
		resultPanel.add(radioButtonPanel, BorderLayout.NORTH);
		
		frame.add(searchPanel, BorderLayout.NORTH);
		frame.add(resultPanel);
		
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setSize(300, 250);
		frame.setLocationRelativeTo(null);
		frame.setVisible(true);
	}
	
	public static void main(String[] args) {
		// Main Method
		SearchEngineGUI program = new SearchEngineGUI();
		program.init();
	}
}










