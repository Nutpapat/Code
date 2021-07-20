package lab06;

import com.sun.tools.javac.comp.Check;
import lab04.Account;
import lab04.CheckingAccount;

public class Customer {
    private String firstName;
    private String lastName;
    private Account account;

    public Customer() {
    }

    public Customer(String firstName, String lastName) {
        setFirstName(firstName);
        setLastName(lastName);
    }

    public String getFirstName() {
        return firstName;
    }

    public String getLastName() {
        return lastName;
    }

    public Account getAccount() {
        return account;
    }

    public void setFirstName(String firstName) {
        this.firstName = firstName;
    }

    public void setLastName(String lastName) {
        this.lastName = lastName;
    }

    public void setAccount(Account account) {
        this.account = account;
    }
}
