package lab_network;

import java.io.*;
import java.net.*;

public class DayTimeServer {
    public static void main(String[] args) {
        try {
            ServerSocket ss = new ServerSocket(5050);
            while (true) {
                System.out.println("Waiting for client..");
                Socket s = ss.accept();
                OutputStream out = s.getOutputStream();
                DataOutputStream dout = new DataOutputStream(out);
                dout.writeUTF(new java.util.Date() + "");
                dout.close();
                s.close();
            }
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }
}
