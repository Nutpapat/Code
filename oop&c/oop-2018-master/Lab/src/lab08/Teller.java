package lab08;

import lab04.Account;
import lab04.CheckingAccount;

public class Teller {
    public static void main(String[] args) {
        CustomerEx cust = new CustomerEx();
        Account acct1 = new Account(5000);
        Account acct2 = new Account(3000);

        cust.addAccount(acct1);
        cust.addAccount(acct2);
        cust.addAccount(new Account(112));
        cust.addAccount(new Account(112));
        cust.addAccount(new Account(112));
        cust.addAccount(new Account(112));
        cust.addAccount(new Account(112));
        cust.addAccount(new Account(112));
        cust.addAccount(new Account(112));
        cust.addAccount(new Account(112));
        cust.addAccount(new Account(112));
        cust.addAccount(new Account(112));
        cust.addAccount(new Account(112));
        cust.addAccount(new Account(112));
        cust.addAccount(new Account(112));
        cust.addAccount(new Account(112));
        cust.addAccount(new Account(112));

        cust.getAccount(1).withdraw(4489);
        cust.getAccount(2).withdraw(1112);

        cust.getAccount(1).showBalance();
        cust.getAccount(2).showBalance();

        System.out.println(cust.getNumOfAccount());
    }
}
