package lab08;

import java.util.ArrayList;
import lab04.Account;

public class CustomerEx {
    private String firstName;
    private String lastName;
    private ArrayList<Account> account;

    public CustomerEx() {
        this("", "");
    }

    public CustomerEx(String firstName, String lastName) {
        setFirstName(firstName);
        setLastName(lastName);
        this.account = new ArrayList<Account>();
    }

    public String getFirstName() {
        return this.firstName;
    }

    public void setFirstName(String firstName) {
        this.firstName = firstName;
    }

    public String getLastName() {
        return this.lastName;
    }

    public void setLastName(String lastName) {
        this.lastName = lastName;
    }

    public void addAccount(Account account) {
        this.account.add(account);
    }

    public Account getAccount(int index) {
        try {
            return this.account.get(index - 1);
        } catch (Exception ex) {
            return null;
        }
    }

    public int getNumOfAccount() {
        return account.size();
    }
}
