package lab09;

public class Teller {
    public static void main(String[] args) throws WithdrawException {
        CheckingAccount myAccount = new CheckingAccount(1000, 500);

        try {
            myAccount.withdraw(11244);
        } catch (WithdrawException ex) {
            System.out.println(ex);
        }
    }
}
