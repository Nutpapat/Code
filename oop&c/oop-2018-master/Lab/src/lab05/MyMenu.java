package lab05;

import java.awt.*;
import javax.swing.*;

public class MyMenu {
    private JFrame frame;
    private JMenuBar menuBar;
    private JMenu fileMenu, helpMenu, software;
    private JMenuItem newFile, open, print, exit;
    private JMenuItem hardware;
    private JMenuItem unix, linux, solaris;
    private JCheckBoxMenuItem checkIt;

    public MyMenu() {
        frame = new JFrame("My Menu");
        menuBar = new JMenuBar();
        fileMenu = new JMenu("File");
        helpMenu = new JMenu("Help");

        newFile = new JMenuItem("New");
        open = new JMenuItem("Open");
        print = new JMenuItem("Print");
        exit = new JMenuItem("Exit");

        software = new JMenu("Software");
        hardware = new JMenuItem("Hardware");

        unix = new JMenuItem("Unix");
        linux = new JMenuItem("Linux");
        solaris = new JMenuItem("Solaris");

        checkIt = new JCheckBoxMenuItem("Check It");

        menuBar.add(fileMenu);
        menuBar.add(helpMenu);

        fileMenu.add(newFile);
        fileMenu.add(open);
        fileMenu.add(print);
        fileMenu.add(exit);

        helpMenu.add(software);
        helpMenu.add(hardware);
        helpMenu.add(checkIt);

        software.add(unix);
        software.add(linux);
        software.add(solaris);

        frame.setJMenuBar(menuBar);

        frame.setSize(400, 250);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
    }

    public static void main(String[] args) {
        // Main Method
        MyMenu program = new MyMenu();
    }
}
