class Employee {
    String name;
    int employeeId;

    Employee(String name, int employeeId) {
        this.name = name;
        this.employeeId = employeeId;
    }
    double calculateSalary() {return 0.0;}
    double calculateSalary(int bonus) {return calculateSalary() + bonus;}
}

class FullTimeEmployee extends Employee{
    double monthlySalary;
    FullTimeEmployee(String name, int employeeId, double monthlySalary) {
        super(name, employeeId);
        this.monthlySalary = monthlySalary;
    }
    @Override
    double calculateSalary() {return this.monthlySalary;}
}

class PartTimeEmployee extends Employee{
    double hourlyRate;
    int hoursWorked;
    PartTimeEmployee(String name, int employeeId, double hourlyRate, int hoursWorked) {
        super(name, employeeId);
        this.hourlyRate = hourlyRate;
        this.hoursWorked = hoursWorked;
    }
    @Override
    double calculateSalary() {return this.hourlyRate * this.hoursWorked;}
}


public class EmployeeSal {
    public static void main(String[] x){
        FullTimeEmployee fte = new FullTimeEmployee("Raitig", 101, 50000);
        PartTimeEmployee pte = new PartTimeEmployee("Rahul", 102, 100, 40);

        System.out.println("Full Time Employee: " + fte.name + " (" + fte.employeeId + ")");
        System.out.println("Monthly Salary: " + fte.monthlySalary);
        System.out.println("Calculated Salary: " + fte.calculateSalary(87));
        System.out.println();

        System.out.println("Part Time Employee: " + pte.name + " (" + pte.employeeId + ")");
        System.out.println("Hourly Rate: " + pte.hourlyRate);
        System.out.println("Hours Worked: " + pte.hoursWorked);
        System.out.println("Calculated Salary: " + pte.calculateSalary());
    }
}
