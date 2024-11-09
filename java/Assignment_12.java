import java.util.Arrays;
import java.util.HashSet;

class Book {
    String title;
    String author;

    Book(String title, String author) {
        this.title = title;
        this.author = author;
    }
    
    @Override
    public boolean equals(Object obj) {
        if (this == obj) { return true; }
        if (obj == null || getClass() != obj.getClass()) { return false; }
        Book book = (Book) obj;
        return title.equals(book.title) && author.equals(book.author);
    }

    @Override
    public int hashCode() {
        int result = title.hashCode();
        return (31 * result + author.hashCode());
    }
}

public class Assignment_12 {
    public static void main(String[] args) {
        HashSet<Book> books = new HashSet<>();
        Book[] booksobjs = {
            new Book("Secrets of DevOps", "Hunter87"),
            new Book("Get to Know", "Someone"),
            new Book("Secrets of DevOps", "Hunter87")
        };
        books.addAll(Arrays.asList(booksobjs));
        for (Book book : books) {
            System.out.println(book.title + " " + book.author);
        }
    }
}
