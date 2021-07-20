package lab10;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.*;
import javax.swing.*;

public class NotePadGUI extends JFrame implements ActionListener {
    private JMenuBar menuBar;
    private JTextArea textArea;
    private JScrollPane scrollPane;
    private JMenu fileMenu;
    private JMenuItem openMenuItem;
    private JMenuItem saveMenuItem;
    private JMenuItem quitMenuItem;
    private JFileChooser fileChooser;

    public NotePadGUI() {
        menuBar = new JMenuBar();
        textArea = new JTextArea();
        scrollPane = new JScrollPane(textArea);
        fileMenu = new JMenu("File");
        openMenuItem = new JMenuItem("Open");
        saveMenuItem = new JMenuItem("Save As");
        quitMenuItem = new JMenuItem("Quit");
        fileChooser = new JFileChooser();
    }

    public void init() {
        textArea.setFont(new Font("Arial", Font.PLAIN, 16));

        menuBar.add(fileMenu);
        fileMenu.add(openMenuItem);
        fileMenu.add(saveMenuItem);
        fileMenu.add(new JPopupMenu.Separator());
        fileMenu.add(quitMenuItem);

        openMenuItem.addActionListener(this);
        saveMenuItem.addActionListener(this);
        quitMenuItem.addActionListener(this);

        setJMenuBar(menuBar);
        add(scrollPane);

        setTitle("JNotePad");
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setVisible(true);
        setSize(600, 400);
        setLocationRelativeTo(null);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == openMenuItem) {
            if (fileChooser.showDialog(null, "Open") == JFileChooser.APPROVE_OPTION) {
                File file = fileChooser.getSelectedFile();
                textArea.setText("");
                try {
                    BufferedReader br = new BufferedReader(new FileReader(file));
                    String line = br.readLine();
                    while (line != null) {
                        textArea.setText(textArea.getText() + line + "\n");
                        line = br.readLine();
                    }
                    br.close();
                } catch (IOException ex) {
                    ex.printStackTrace();
                }
            }
        } else if (e.getSource() == saveMenuItem) {
            if (fileChooser.showDialog(null, "Save As") == JFileChooser.APPROVE_OPTION) {
                File file = fileChooser.getSelectedFile();
                try {
                    PrintWriter pw = new PrintWriter(new FileWriter(file));
                    pw.write(textArea.getText());
                    pw.close();
                } catch (IOException ex) {
                    ex.printStackTrace();
                }
            }
        } else if (e.getSource() == quitMenuItem) {
            if (JOptionPane.showConfirmDialog(null, "Are you sure do you want to exit?") == 0) {
                System.exit(0);
            }
        }
    }
}

class NotePad {
    public static void main(String[] args) {
        NotePadGUI program = new NotePadGUI();
        program.init();
    }
}