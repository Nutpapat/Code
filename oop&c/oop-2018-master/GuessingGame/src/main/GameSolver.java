package main;

public class GameSolver {
    public int play(NumberGame game) {
        int start = 1;
        int end = game.getUpperBound();
        int mid = (int)Math.floor(start + (double)(end - start)/2);

        System.out.println("Guess a Secret Number.");
        System.out.println("I'm thinking of a number between 1 and " + game.getUpperBound() + ".");

        // Binary Search
        while (true) {
            System.out.println("Your guess? " + mid);
            if (game.guess(mid)) {
                System.out.println(game.getMessage());
                return mid;
            }
            else if (game.getMessage().contains("small")) {
                start = mid + 1;
                mid = (int)Math.floor(start + (double)(end - start)/2);
                System.out.println(game.getMessage());
            }
            else if (game.getMessage().contains("large")) {
                end = mid - 1;
                mid = (int)Math.floor(start + (double)(end - start)/2);
                System.out.println(game.getMessage());
            }
            else if (start == mid && mid == end) {
                break;
            }
        }

        return -1;
    }
}
