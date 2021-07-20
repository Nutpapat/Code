package lab06;

public class ComplexNumber {
    private double real;
    private double imaginary;

    public ComplexNumber(double real, double imaginary) {
        setReal(real);
        setImaginary(imaginary);
    }

    public double getReal() {
        return real;
    }

    public double getImaginary() {
        return imaginary;
    }

    public void setReal(double real) {
        this.real = real;
    }

    public void setImaginary(double imaginary) {
        this.imaginary = imaginary;
    }

    public void add(ComplexNumber num) {
        this.real += num.getReal();
        this.imaginary += num.getImaginary();
    }

    public void subtract(ComplexNumber num) {
        this.real -= num.getReal();
        this.imaginary -= num.getImaginary();
    }

    public void multiply(ComplexNumber num) {
        //(ac - bd) + (ad + bc)i
        double realTemp = this.real*num.getReal() - this.imaginary*num.getImaginary();
        double imaginaryTemp = this.real*num.getImaginary() - this.imaginary*num.getReal();

        setReal(realTemp);
        setImaginary(imaginaryTemp);
    }

    public String toString() {
        if (this.imaginary < 0)
            return this.real + " - " + Math.abs(this.imaginary) + "i";
        return this.real + " + " + Math.abs(this.imaginary) + "i";
    }

    public boolean equals(ComplexNumber num) {
        return this.real == num.getReal() && this.imaginary == num.getImaginary();
    }

    public static void main(String[] args) {
        ComplexNumber a = new ComplexNumber(5, 4);
        ComplexNumber b = new ComplexNumber(-9, -3);
        ComplexNumber c = new ComplexNumber(-9, -3);

        System.out.println(a.toString());
        System.out.println(b.toString());
        System.out.println(c.toString());

        System.out.println(a.equals(b));
        System.out.println(b.equals(c));
    }
}
