/*
Employee Class:
•	Create a base class called Employee with the following attributes:
o	String name
o	int employeeId
•	Include the following methods:
o	double calculateSalary(): A method to calculate the base salary. This method should be designed to be overridden by subclasses.
o	Overload calculateSalary() to accept an additional parameter, such as a bonus amount.
Subclasses:
•	FullTimeEmployee:
o	Inherit from an Employee.
o	Include an additional attribute double monthlySalary.
o	Override the calculateSalary() method to return the fixed monthly salary.
•	PartTimeEmployee:
o	Inherit from an Employee.
o	Include additional attributes double hourlyRate and int hoursWorked.
o	Override the calculateSalary() method to calculate the salary based on hours worked and the hourly rate.
Main Class:
•	Create instances of FullTimeEmployee and PartTimeEmployee.
•	Demonstrate the usage of both the base and overloaded calculateSalary() methods.
Display the calculated salaries along with employee details.++
*/


class Employee {
    String name;
    int employeeId;

    Employee(String name, int employeeId) {
        this.name = name;
        this.employeeId = employeeId;
    }

    double calculateSalary(double monthlySalary) {
        return monthlySalary;
    }

    double calculateSalary(double monthlySalary, double bonus) {
        return monthlySalary + bonus;
    }
}

class FullTimeEmployee extends Employee{
    double monthlySalary;

    FullTimeEmployee(String name, int employeeId, double monthlySalary) {
        super(name, employeeId);
        this.monthlySalary = monthlySalary;
    }
    
    double calculateSalary() {
        return super.calculateSalary(this.monthlySalary);
    }
}

class PartTimeEmployee extends Employee{
    double hourlyRate;
    int hoursWorked;

    PartTimeEmployee(String name, int employeeId, double hourlyRate, int hoursWorked) {
        super(name, employeeId);
        this.hourlyRate = hourlyRate;
        this.hoursWorked = hoursWorked;
    }

    double calculateSalary() {
        return super.calculateSalary(this.hourlyRate * this.hoursWorked);
    }
}


class EmployeeSal {
    public static void main(String[] x){
        FullTimeEmployee fte = new FullTimeEmployee("Raitig", 101, 50000);
        PartTimeEmployee pte = new PartTimeEmployee("Rahul", 102, 100, 40);

        System.out.println("Full Time Employee: " + fte.name + " (" + fte.employeeId + ")");
        System.out.println("Monthly Salary: " + fte.monthlySalary);
        System.out.println("Calculated Salary: " + fte.calculateSalary());
        System.out.println();

        System.out.println("Part Time Employee: " + pte.name + " (" + pte.employeeId + ")");
        System.out.println("Hourly Rate: " + pte.hourlyRate);
        System.out.println("Hours Worked: " + pte.hoursWorked);
        System.out.println("Calculated Salary: " + pte.calculateSalary());
    }
}