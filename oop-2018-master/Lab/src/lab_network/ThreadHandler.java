package lab_network;

import java.io.*;
import java.net.*;

public class ThreadHandler implements Runnable {
    private Socket s;

    public ThreadHandler(Socket s) {
        this.s = s;
    }

    public void run() {
        try {
            InputStream in = s.getInputStream();
            DataInputStream din = new DataInputStream(in);
            String fileName = din.readUTF();
            FileInputStream fin = new FileInputStream(fileName);
            OutputStream out = s.getOutputStream();
            byte[] b = new byte[1024];
            int i;
            while ((i = fin.read(b)) != -1) {
                out.write(b);
            }
            out.close();
            fin.close();
            din.close();
            s.close();
        } catch (Exception ex) {
            ex.printStackTrace();
        }
    }
}
