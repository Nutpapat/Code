package lab06;

import lab04.Account;
import lab04.CheckingAccount;

public class Teller {
    public static void main(String[] args) {
        Account myAccount = new CheckingAccount(4000, 500);
        Customer cust = new Customer("Somchai", "Sommut");

        cust.setAccount(myAccount);
        cust.getAccount().withdraw(4300);
        cust.getAccount().showBalance();
        ((CheckingAccount) cust.getAccount()).showCredit();

        cust.getAccount().deposit(4200);
        cust.getAccount().showBalance();
        ((CheckingAccount) cust.getAccount()).showCredit();
    }
}
