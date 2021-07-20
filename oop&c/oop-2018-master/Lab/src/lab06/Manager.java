package lab06;

public class Manager extends Employee {
    private String department;

    public Manager(){
    }

    public Manager(String name, String position, double salary, String department) {
        super(name, position, salary);
        this.department = department;
    }

    @Override
    public void showDetails() {
        System.out.println("Name: " + this.name);
        System.out.println("Position: " + this.position);
        System.out.println("Salary: ฿" + this.salary);
        System.out.println("Department: " + this.department);
    }

    public static void main(String[] args) {
        Employee a = new Employee("Prayut Chan-o-Cha", "Prime Minister", 200000);
        a.showDetails();
    }
}
