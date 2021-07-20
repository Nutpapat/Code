package main;

import javax.swing.JOptionPane;

public class Main {
    public static void main(String[] args) {
        NumberGame game = new WiputGame(100);

        GameConsole ui1 = new GameConsole();
        GameSolver ui2 = new GameSolver();
        GameDialog ui3 = new GameDialog();

        int solution = ui3.play(game);

        System.out.println("\n" + game.getCount() + " play() returned " + solution + ".");
    }
}
