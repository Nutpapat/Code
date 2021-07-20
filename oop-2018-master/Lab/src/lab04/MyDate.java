/*
    MyDate Class
 */

package lab04;

public class MyDate {
    private int day;
    private int month;
    private int year;

    public static void main(String[] args) {
        // Main Method
        MyDate d1 = new MyDate();
        d1.setDay(16);
        d1.setMonth(12);
        d1.setYear(2002);
        d1.print();
        d1.setDay(29);
        d1.setMonth(2);
        d1.print();
    }

    public void setDay(int newDay) {
        // Object Method: Set Day
        if (1 <= newDay && newDay <= 31)
            this.day = newDay;
    }

    public void setMonth(int newMonth) {
        // Object Method: Set Month
        if (1 <= newMonth && newMonth <= 13)
            this.month = newMonth;
    }

    public void setYear(int newYear) {
        // Object Method: Set Year
        if (1 <= newYear)
            this.year = newYear;
    }

    public int getDay() {
        // Object Method: Get Day
        return this.day;
    }

    public int getMonth() {
        // Object Method: Get Month
        return this.month;
    }

    public int getYear() {
        // Object Method: Get Year
        return this.year;
    }

    public void print() {
        // Object Method: Print
        System.out.println(this.day + "/" + this.month + "/" + this.year);
    }
}
