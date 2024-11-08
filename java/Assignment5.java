class Staff {
    int code;
    String name;
    Staff(int code, String name){
        this.code=code;
        this.name=name;
    }
}
class Teacher extends Staff{
    String subject;
    String publication;
    Teacher(int code, String name, String subject, String publication){
		super(code, name);
		this.subject = subject;
		this.publication=publication;
	}
}
class Officer extends Staff{
	String grade;
	Officer(int code, String name, String grade){
        super(code, name);
		this.grade = grade;
	}
}

class Typist extends Staff{
	int speed;
	Typist(int code, String name, int speed){
        super(code, name);
		this.speed=speed;
	}
}

class RegularTypist extends Typist{
	int remuneration;
	RegularTypist(int code, String name, int speed, int remuneration){
        super(code, name, speed);
		this.remuneration=remuneration;
	}
}
class CasualTypist extends Typist{
	double wage;
	CasualTypist(int code, String name, int speed, double dailywage){
        super(code, name, speed);
		this.wage=dailywage;
	}
}



public class Assignment5 {
    public static void main(String[] x){
        Teacher tch = new Teacher(100, "Hunter87", "ReactJS", "React Foundation");
        Officer ofc = new Officer(101, "Neha", "O");
        Typist typ = new Typist(102, "Sourav", 60);
        RegularTypist rtyp = new RegularTypist(103, "Jake Blayer", 80, 50000);
        CasualTypist ctyp = new CasualTypist(104, "Peter Smith", 70, 100.0);
	
        System.out.println("Teacher: "+ "\nCode: "+tch.code + "\nName: "+tch.name+"\nSub: "   +tch.subject+"\nPub: "+tch.publication+"\n");
        System.out.println("Officer:" + "\nCode: "+ofc.code + "\nName: "+ofc.name+ "\nGrade: "+ofc.grade+"\n");
        System.out.println("Typist: " + "\nCode: "+typ.code + "\nName: "+typ.name+"\nSpeed:"  +typ.speed+"\n");
        System.out.println("Regular Typist: " + "\nCode: "+rtyp.code +"\nName: "+rtyp.name+"\nSpeed: "+rtyp.speed+"\nRemuneration: "+rtyp.remuneration+"\n");
        System.out.println("Casual Typist: " + "\nCode: "+ctyp.code +"\nName: "+ctyp.name+"\nSpeed: "+ctyp.speed+"\nWage: "+ctyp.wage+"\n");
	}
}
