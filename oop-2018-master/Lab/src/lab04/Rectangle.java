/*
    Rectangle Class
 */

package lab04;

public class Rectangle {
    private double width = 1;
    private double height = 1;
    private String color = "white";

    public static void main(String[] args) {
        // Main Method
        Rectangle rect1 = new Rectangle(10.5, 8, "red");
        Rectangle rect2 = new Rectangle(12, 5.5, "yellow");

        System.out.println("- Rectangle #1 -");
        System.out.println("Width:  " + rect1.getWidth());
        System.out.println("Height: " + rect1.getHeight());
        System.out.println("Color:  " + rect1.getColor());
        System.out.println("Area:   " + rect1.findArea());

        System.out.println();

        System.out.println("- Rectangle #2 -");
        System.out.println("Width:  " + rect2.getWidth());
        System.out.println("Height: " + rect2.getHeight());
        System.out.println("Color:  " + rect2.getColor());
        System.out.println("Area:   " + rect2.findArea());
    }

    public Rectangle() {
        // Constructor
    }

    public Rectangle(double width, double height, String color) {
        // Constructor
        setWidth(width);
        setHeight(height);
        setColor(color);
    }

    public void setWidth(double width) {
        // Object Method: Set Width
        if (width > 0)
            this.width = width;
    }

    public double getWidth() {
        // Object Method: Get Width
        return this.width;
    }

    public void setHeight(double height) {
        // Object Method: Set Height
        if (height > 0)
            this.height = height;
    }

    public double getHeight() {
        // Object Method: Get Height
        return this.height;
    }

    public void setColor(String color) {
        // Object Method: Set Color
        if (color.length() >= 3)
            this.color = color;
    }

    public String getColor() {
        // Object Method: Get Color
        return this.color;
    }

    public double findArea() {
        // Object Method: Return Area
        return this.width * this.height;
    }
}
