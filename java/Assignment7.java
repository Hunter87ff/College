interface Exam{
    public void percent_call();
}
class Student{
    String name;
    int roll_no;
    int marks1, marks2;
    Student(String name, int roll_no, int marks1, int marks2){
        this.name = name;
        this.roll_no=roll_no;
        this.marks1=marks1;
        this.marks2=marks2;
    }
    void show(){
        System.out.println("Name: "+name+"\nRoll: "+roll_no+"\nmarks: "+marks1+","+marks2);
    }
}

class Result extends Student implements  Exam{

    Result(String name, int roll_no, int marks1, int marks2){
        super(name, roll_no, marks1, marks2);
    }
    void per_display(){
        double per=((this.marks1+this.marks2)/100)*100;
        System.out.println("Result Percentage : "+per);
    }
    public void percent_call(){
        this.show();
        this.per_display();
    }
}

public class Assignment7{
    public static void main(String[] x){
        Result r = new Result("Rahul", 1, 90, 80);
        r.percent_call();
    }
}
