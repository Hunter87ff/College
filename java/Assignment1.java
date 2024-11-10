import java.util.Scanner;

class Calc {
    public double add(double num1, double num2) {return num1 + num2; }
    public double subtract(double num1, double num2) {return num1 - num2;}
    public double multiply(double num1, double num2) {return num1 * num2; }
    public double divide(double num1, double num2) {
        if (num2 == 0) {throw new ArithmeticException("Cannot divide by zero");}
        return num1 / num2;
    }
}

public class Assignment1 {
    public static void main(String[] args) {
        Calc calculator = new Calc();
        Scanner scanner = new Scanner(System.in);
        System.out.println("Simple Calculator");
        System.out.println("1. Addition");
        System.out.println("2. Subtraction");
        System.out.println("3. Multiplication");
        System.out.println("4. Division");
        System.out.println("5. Exit");
        while (true) {
            System.out.print("Enter your choice (1-5): ");
            int choice = scanner.nextInt();
            if (choice == 5) {
                System.out.println("Exiting...");
                break;
            }
            System.out.print("Enter first number: ");
            double num1 = scanner.nextDouble();
            System.out.print("Enter second number: ");
            double num2 = scanner.nextDouble();
            switch (choice) {
                case 1:
                    System.out.println(num1 + " + " + num2 + " = " + calculator.add(num1, num2));
                    break;
                case 2:
                    System.out.println(num1 + " - " + num2 + " = " + calculator.subtract(num1, num2));
                    break;
                case 3:
                    System.out.println(num1 + " * " + num2 + " = " + calculator.multiply(num1, num2));
                    break;
                case 4:
                    try { System.out.println(num1 + " / " + num2 + " = " + calculator.divide(num1, num2));} 
                    catch (ArithmeticException e) {System.out.println(e.getMessage());}
                    break;
                default:
                    System.out.println("Invalid choice. Please choose again.");
            }
        }
        scanner.close();
    }
}
