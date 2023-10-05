import java.util.*;

public class Main {
    public static void printName(String first, String middle, String last){
        System.out.print("First: "+first+"\nMiddle: "+middle+"\nLast: "+last);
    }

    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Name (x x x): ");
        printName(input.next(),input.next(),input.next());
        input.close();
    }
    
}
