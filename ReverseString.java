import java.util.Scanner;

public class ReverseString {
    public static String reverseString(String s) {
        if (s == null) return null;
        return new StringBuilder(s).reverse().toString();
    }

    public static void main(String[] args) {
        String input;
        if (args.length > 0) {
            input = String.join(" ", args);
        } else {
            Scanner sc = new Scanner(System.in);
            input = sc.hasNextLine() ? sc.nextLine() : "";
            sc.close();
        }
        System.out.println(reverseString(input));
    }
}