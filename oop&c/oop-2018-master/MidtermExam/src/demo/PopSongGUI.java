package demo;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class PopSongGUI {
	private Song p1, p2;
	private JFrame frame;
	private JPanel displayPanel, titlePanel, artistPanel, menuPanel;
	private JTextField titleField, artistField;
	private JButton prev, next;
	
	public PopSongGUI() {
		// Constructor
		p1 = new PopSong("Heal the World", "Michael Jackson");
		p2 = new PopSong("Torn", "Natalie Imbruglia");
	}
	
	public void init() {
		// Instance Method: Run Program
		// Components Creation
		frame = new JFrame("Select Song");
		displayPanel = new JPanel(new GridLayout(2, 1));
		titlePanel = new JPanel(new BorderLayout());
		artistPanel = new JPanel(new BorderLayout());
		menuPanel = new JPanel();
		titleField = new JTextField(p1.getTitle());
		artistField = new JTextField(p1.getArtist());
		
		// Components Settings
		titleField.setEditable(false);
		artistField.setEditable(false);
		
		prev = new JButton("Previous");
		next = new JButton("Next");
		
		prev.setEnabled(false);
		prev.addActionListener(new MyActionListener());
		next.addActionListener(new MyActionListener());
		
		// Components Adding
		titlePanel.add(new JLabel("Title:   "), BorderLayout.WEST);
		titlePanel.add(titleField);
		artistPanel.add(new JLabel("Artist: "), BorderLayout.WEST);
		artistPanel.add(artistField);
		
		displayPanel.add(titlePanel);
		displayPanel.add(artistPanel);
		
		menuPanel.add(prev);
		menuPanel.add(next);
		
		frame.add(displayPanel);
		frame.add(menuPanel, BorderLayout.SOUTH);
		
		// Frame Settings
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setSize(250, 125);
		frame.setLocationRelativeTo(null);
		frame.setVisible(true);
	}
	
	private class MyActionListener implements ActionListener {
		// Inner Class: ActionListener implemented
		public void actionPerformed(ActionEvent e) {
			if (e.getSource() == prev) {
				titleField.setText(p1.getTitle());
				artistField.setText(p1.getArtist());
				prev.setEnabled(false);
				next.setEnabled(true);
			}
			else if (e.getSource() == next) {
				titleField.setText(p2.getTitle());
				artistField.setText(p2.getArtist());
				prev.setEnabled(true);
				next.setEnabled(false);
			}
		}
	}
	
	public static void main(String[] args) {
		// Main Method
		PopSongGUI program = new PopSongGUI();
		program.init();
	}
}





