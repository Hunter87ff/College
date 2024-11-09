import java.util.Scanner;

class NoMatchFoundException extends Exception {
    /* Returns an Exception */
}

public class Assignment10 {
    public static void main(String[] x) {
        String s1 = "University";
        System.out.println("Enter String : ");
        Scanner inp = new Scanner(System.in);
        String s2 = inp.next();
        try {
            if (!s1.equals(s2)) {
                throw new NoMatchFoundException();
            } else {
                System.out.println("Strings are equal");
            }
        } catch (NoMatchFoundException e) {
            System.out.println("No match found");
        }
    }
}
