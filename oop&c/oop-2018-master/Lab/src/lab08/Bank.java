package lab08;

import lab04.Account;

public class Bank {
    private Account[] accounts;
    private int numAccount;

    public Bank() {
        this.accounts = new Account[10];
        this.numAccount = 0;
    }

    public void addAccount(Account account) {
        if (numAccount < 10) {
            this.accounts[this.numAccount++] = account;
        }
    }

    public Account getAccount(int index) {
        try {
            return this.accounts[index-1];
        }
        catch (Exception ex) {
            return null;
        }
    }

    public int getNumAccount() {
        return this.numAccount;
    }
}
