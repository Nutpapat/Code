package lab_network;

import java.net.*;

public class HostInfo {
    public static void main(String[] args) {
        try {
            InetAddress myHost = InetAddress.getLocalHost();
            System.out.println("Name: " + myHost.getHostName());
            System.out.println("IP: " + myHost.getHostAddress());
        } catch (UnknownHostException ex) {
            ex.printStackTrace();
        }
    }
}
