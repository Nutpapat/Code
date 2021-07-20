/*
    SolutionFinderEx Class
 */

package lab03;

import java.util.Scanner;

public class SolutionFinderEx {
    public static void main(String[] args) {
        // Main Method
        Scanner input = new Scanner(System.in);
        double a = input.nextDouble();
        double b = input.nextDouble();
        double c = input.nextDouble();

        if (Math.pow(b, 2) - 4 * a * c < 0) {
            System.out.println("No answer");
        }
        else {
            System.out.println(-b + Math.sqrt(Math.pow(b, 2) - 4 * a * c) / (2 * a));
            System.out.println(-b - Math.sqrt(Math.pow(b, 2) - 4 * a * c) / (2 * a));
        }
    }
}
