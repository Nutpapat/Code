package lab10;

import lab08.CustomerEx;

import java.io.*;

public class CustomerStorage {
    public static double getBalance() {
        try {
            FileInputStream fin = new FileInputStream("Customer.dat");
            DataInputStream din = new DataInputStream(fin);
            return din.readDouble();
        } catch (IOException ex) {
            System.out.println(ex);
        }
        return 0;
    }

    public static void saveBalance(double balance) {
        try {
            FileOutputStream fout = new FileOutputStream("Customer.dat");
            DataOutputStream dout = new DataOutputStream(fout);
            dout.writeDouble(balance);
            fout.close();
            dout.close();
        } catch (IOException ex) {
            System.out.println(ex);
        }
    }
}
