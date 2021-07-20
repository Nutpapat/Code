package lab06alt;

public class Manager implements Employee {
    private String name;
    private String position;
    private double salary;
    private String department;

    public Manager(){
    }

    public Manager(String name, String position, double salary, String department) {
        this.name = name;
        this.position = position;
        this.salary = salary;
        this.department = department;
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
        System.out.println("Department: " + this.department);
    }

    public static void main(String[] args) {
        Manager a = new Manager("Prayut Chan-o-Cha", "Prime Minister", 200000, "Thailand");
        a.showDetails();
    }
}
