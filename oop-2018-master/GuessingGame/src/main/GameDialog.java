package main;

import javax.swing.JOptionPane;

public class GameDialog {
    public int play(NumberGame game) {
        boolean isGuessing = true;
        int answer = 0;

        while (isGuessing) {
            answer = Integer.parseInt(JOptionPane.showInputDialog(null, "I'm thinking of a number between 1 and " + game.getUpperBound() + ".\nYour guess?", "Guess the Number", JOptionPane.QUESTION_MESSAGE));
            isGuessing = !game.guess(answer);
            JOptionPane.showMessageDialog(null, game.getMessage());
        }

        return answer;
    }
}
