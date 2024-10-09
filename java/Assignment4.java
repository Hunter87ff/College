import java.util.Scanner;

class Grader{
	String grade;
	int score;
	Grader(int score){this.score=score;}
	
	String letterGrade(){
		if(score>100 || score <0){this.grade="Invalid";}
		else if(this.score>=90){this.grade="O";}
		else if(this.score>=80 && this.score<90){this.grade="E";}
		else if(this.score>=70 && this.score<80){this.grade="A";}
		else if(this.score>=60 && this.score<70){this.grade="B";}
		else if(this.score>=50 && this.score<60){this.grade="C";}
		else if(this.score<50){this.grade="F";}
		return this.grade;
	}
}

class Assignment4{
	public static void main(String[] x){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Your score : ");
		Grader user_grade = new Grader(sc.nextInt());
		System.out.println("You Grade : "+user_grade.letterGrade());
	}
}
