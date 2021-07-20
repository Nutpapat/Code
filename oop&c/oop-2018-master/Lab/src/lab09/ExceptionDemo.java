package lab09;

import java.util.Scanner;

public class ExceptionDemo {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double a, b, c;

        try {
            a = Double.parseDouble(input.nextLine());
            b = Double.parseDouble(input.nextLine());
            c = Double.parseDouble(input.nextLine());
            input.close();

            if (Math.pow(b, 2) - 4 * a * c < 0 || a == 0) {
                throw new ArithmeticException();
            }

            System.out.println("x1 = " + (-b + Math.sqrt(Math.pow(b, 2) - 4 * a * c)) / (2 * a));
            System.out.println("x2 = " + (-b - Math.sqrt(Math.pow(b, 2) - 4 * a * c)) / (2 * a));
        } catch (ArithmeticException ex) {
            System.out.println("[Catch Block] ArithmeticException");
            System.out.println(ex);
        } catch (NumberFormatException ex) {
            System.out.println("[Catch Block] NumberFormatException");
            System.out.println(ex);
        } catch (Exception ex) {
            System.out.println("[Catch Block] Exception");
            System.out.println(ex);
        }
    }
}
