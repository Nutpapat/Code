package lab08;

import lab04.Account;
import lab04.CheckingAccount;

public class Customer {
    private String firstName;
    private String lastName;
    private Account[] account;
    private int numOfAccount;

    public Customer() {
        this("", "");
    }

    public Customer(String firstName, String lastName) {
        setFirstName(firstName);
        setLastName(lastName);

        this.account = new Account[5];
        numOfAccount = 0;
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
        if (numOfAccount < 5) {
            this.account[this.numOfAccount++] = account;
        }
    }

    public Account getAccount(int index) {
        try {
            return this.account[index-1];
        }
        catch (Exception ex) {
            return null;
        }
    }

    public int getNumOfAccount() {
        return this.numOfAccount;
    }
}
