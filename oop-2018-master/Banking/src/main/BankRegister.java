package main;

import java.util.ArrayList;

public class BankRegister {
	protected ArrayList database;

	public BankRegister() {
		database = new ArrayList();
	}
	
	public ArrayList getDatabase() {
		return database;
	}

	public void setDatabase(ArrayList database) {
		this.database = database;
	}
	
	public void register(BankAccount account) {
		database.add(account);
	}
	
	public BankAccount getBankAccount(String id) {
		for (int i = 0; i < database.size(); i++) {
			if (((BankAccount)database.get(i)).getId().equals(id)) {
				return (BankAccount)database.get(i);
			}
		}
		return null;
	}
	
	public void debug() {
		System.out.println("-Current Database-");
		for (int i = 0; i < database.size(); i++) {
			System.out.print(i + " ");
			System.out.print(((BankAccount)database.get(i)).getId() + " ");
			System.out.print(((BankAccount)database.get(i)).getName() + " ");
			System.out.println(((BankAccount)database.get(i)).getBalance());
		}
	}
}
