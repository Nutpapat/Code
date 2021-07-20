package lab_rmi;

import java.net.MalformedURLException;
import java.rmi.*;

public class HelloClient {
    public static void main(String[] args) {
        try {
            Hello obj = (Hello) Naming.lookup("rmi://localhost/hello");
            System.out.println(obj.sayHello());
        } catch (RemoteException | MalformedURLException | NotBoundException ex) {
            ex.printStackTrace();
        }
    }
}
