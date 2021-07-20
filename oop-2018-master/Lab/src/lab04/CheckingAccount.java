/*
    CheckingAccount Class
 */

package lab04;

public class CheckingAccount extends Account {
    protected double credit;

    public CheckingAccount(double amount, double credit) {
        // Constructor
        super(amount);
        this.credit = credit;
    }


    public boolean withdraw(double amount) {
        // Object Method: Withdraw (Overrides)
        if (amount <= this.balance + this.credit) {
            this.balance -= amount;

            if (this.balance < 0) {
                this.credit += this.balance;
                this.balance = 0;
            }

            return true;
        }
        return false;
    }

    public void showCredit() {
        // Object Method: Show Credit
        System.out.println(this.credit);
    }
}
