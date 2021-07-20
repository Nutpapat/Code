/*
    Factorial Class
 */

package lab03;

import java.util.Scanner;

public class Factorial {
    public static void main(String[] args) {
        // Main Method
        Scanner input = new Scanner(System.in);
        System.out.println(factorial(input.nextInt()));
    }
    public static int factorial(int num) {
        // Factorial
        if (num <= 1)
            return 1;
        return num * factorial(num - 1);
    }
}
