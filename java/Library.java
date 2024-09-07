import java.util.Scanner;



class Member{
		String name;
		String id;
		Book[] books = new Book[10];
		int bookCount=0;
		
		Member(String name, String id){
			this.name=name;
			this.id=id;
		}
		
		boolean borrow(Book book){
			if(!book.is_available){
				System.out.println("Book isn't available!!" +
				 book.title);
				return false;
			}
			this.books[this.bookCount]=book;
			this.bookCount+=1;
			System.out.println("Book Borrowed : "+book.title);
			book.is_available=false;
			return true;
		}
}

class Book {
    String title;
    String author;
    int ISBN;
    boolean is_available;

    Book(String title, String author, int ISBN) {
        this.title = title; 
        this.author = author; 
        this.ISBN = ISBN;
        this.is_available = true; 
    }
}


public class Library{
    public static void main(String[] x){
    	Book[] lbooks = new Book[10];
		
    	String[] author = {"hunter87", "debajit", "Raitig"};
    	String[] bookn = {"Socket Server", "Food factor", "Rage Ranger"};
    	Member member = new Member("hunter87", "bwubca23654");
		System.out.println("USer Name : "+member.name + "\nUser ID : "+member.id);
		//System.out.println("Title 0: "+bookn[0]);
    	for(int i=0; i<=2; i++){
    	    lbooks[i] = new Book(bookn[i], author[i], i+1);
			System.out.println("Book Added : "+bookn[i]);
    	}
    	member.borrow(lbooks[0]);
		member.borrow(lbooks[1]);
		member.borrow(lbooks[0]);
    }
}