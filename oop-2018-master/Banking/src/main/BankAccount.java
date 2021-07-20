package main;

public class BankAccount {
	private String id;
	private String name;
	private double balance;
	
	public BankAccount() {
		
	}
	
	public BankAccount(String id, String name, double balance) {
		this.setId(id);
		this.setName(name);
		this.setBalance(balance);
	}
	
	public String getId() {
		return id;
	}

	public void setId(String id) {
		this.id = id;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public double getBalance() {
		return balance;
	}

	public void setBalance(double balance) {
		if (balance > 0)
			this.balance = balance;
	}

	public boolean deposit(double amount) {
		if (amount >= 0) {
			this.balance += amount;
			return true;
		}
		return false;
	}
	
	public boolean withdraw(double amount) {
		if (amount >= 0 && amount >= this.balance) {
			this.balance -= amount;
			return true;
		}
		return false;
	}
	
	public boolean transfer(BankAccount receiver, double amount) {
		if (this.withdraw(amount)) {
			receiver.deposit(amount);
			return true;
		}
		return false;
	}
}
