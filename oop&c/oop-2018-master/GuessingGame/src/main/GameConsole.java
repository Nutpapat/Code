package main;

import java.util.Scanner;

public class GameConsole {
    public int play(NumberGame game) {
        Scanner input = new Scanner(System.in);
        boolean isGuessing = true;
        int answer = 0;

        System.out.println("Guess a Secret Number.");
        System.out.println("I'm thinking of a number between 1 and " + game.getUpperBound() + ".");

        while (isGuessing) {
            System.out.print("Your guess? ");
            answer = input.nextInt();
            isGuessing = !game.guess(answer);
            System.out.println(game.getMessage());
        }

        return answer;
    }
}
