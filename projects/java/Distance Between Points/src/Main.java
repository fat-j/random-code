import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Point 1 <x y>: ");
        double x1 = input.nextDouble();
        double y1 = input.nextDouble();
        System.out.print("Point 2 <x y>: ");
        double x2 = input.nextDouble();
        double y2 = input.nextDouble();
        System.out.print(Math.sqrt(Math.pow(x2-x1,2)+Math.pow(y2-y1,2)));
    }
}
