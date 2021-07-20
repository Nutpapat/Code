/*
    NumberPrinter Class
 */

package lab03;

import java.util.Scanner;

public class NumberPrinter {
    public static void main(String[] args) {
        // Main Method
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();

        for (short i = 1; i <= num; i++) {
            for (short j = 0; j < i; j++) {
                System.out.print(i + " ");
            }
            System.out.println();
        }
    }
}
