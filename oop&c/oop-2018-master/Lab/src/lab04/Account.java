/*
    Account Class
 */

package lab04;

public class Account {
    protected double balance;

    public Account() {
        // Constructor
        this(0);
    }

    public Account(double amount) {
        // Constructor
        if (amount < 0)
            this.balance = 0;
        else
            this.balance = amount;
    }

    public void deposit(double amount) {
        // Object Method: Deposit
        if (amount >= 0)
            this.balance += amount;
    }

    public boolean withdraw(double amount) {
        // Object Method: Withdraw
        if (this.balance >= amount && amount >= 0) {
            this.balance -= amount;
            return true;
        }
        return false;
    }

    public double getBalance() {
        return balance;
    }

    public void showBalance() {
        // Object Method: Show Balance
        System.out.println(this.balance);
    }
}
