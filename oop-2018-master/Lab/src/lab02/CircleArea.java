/*
    lab02.CircleArea Class
 */

package lab02;

import java.util.Scanner;

public class CircleArea {
    public static void main(String[] args) {
        // Main Method
        Scanner input = new Scanner(System.in);
        double radius = input.nextDouble();

        System.out.println(Math.PI * Math.pow(radius, 2));
    }
}
