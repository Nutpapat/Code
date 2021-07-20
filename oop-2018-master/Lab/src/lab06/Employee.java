package lab06;

public class Employee {
    protected String name;
    protected String position;
    protected double salary;

    public Employee(){

    }

    public Employee(String name, String position, double salary) {
        this.name = name;
        this.position = position;
        this.salary = salary;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getPosition() {
        return position;
    }

    public void setPosition(String position) {
        this.position = position;
    }

    public double getSalary() {
        return salary;
    }

    public void setSalary(int salary) {
        this.salary = salary;
    }

    public double calSalary(int hour, double perHour) {
        return hour*perHour;
    }

    public void showDetails() {
        System.out.println("Name: " + this.name);
        System.out.println("Position: " + this.position);
        System.out.println("Salary: ฿" + this.salary);
    }
}
