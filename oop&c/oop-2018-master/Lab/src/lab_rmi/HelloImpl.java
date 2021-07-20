package lab_rmi;

import java.rmi.*;
import java.rmi.server.*;

public class HelloImpl extends UnicastRemoteObject implements Hello {
    public HelloImpl() throws RemoteException {
    }

    @Override
    public String sayHello() throws RemoteException {
        return "Hello World!";
    }
}
