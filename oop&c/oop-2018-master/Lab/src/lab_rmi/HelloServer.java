package lab_rmi;

import java.net.MalformedURLException;
import java.rmi.*;
import java.rmi.registry.*;

public class HelloServer {
    public static void main(String[] args) {
        try {
            LocateRegistry.createRegistry(1099);
            HelloImpl obj = new HelloImpl();
            Naming.rebind("hello", obj);
        } catch (RemoteException | MalformedURLException ex) {
            ex.printStackTrace();
        }
    }
}
