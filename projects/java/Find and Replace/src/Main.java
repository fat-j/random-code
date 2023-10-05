import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("text: ");
        String text = input.nextLine();
        System.out.print("What to find: ");
        String find = input.nextLine();
        System.out.print("Replace with: ");
        String replacer = input.nextLine();
        System.out.print(text.replaceAll(find, replacer));            
    }

}
