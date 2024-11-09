import java.util.Scanner;

class NoMatchFoundException extends Exception {
    NoMatchFoundException(String message) {
        super(message);
    }
}

public class Assignment_10 {
    public static void main(String[] x) {
        String s1 = "University";
        System.out.println("Enter String : ");
        Scanner inp = new Scanner(System.in);
        String s2 = inp.next();
        try {
            if (!s1.equals(s2)) {
                throw new NoMatchFoundException("No match Found : " + s2);
            } else {
                System.out.println("Strings are equal");
            }
        } catch (NoMatchFoundException e) {
            System.out.println(e.getMessage());
        }
    }
}
