import java.util.*;

public class Main {
    static void calculate(double r1, double r2, double a){
        double v1 = Math.pow(r1*a,0.5);
        double v2 = Math.pow(r2*a,0.5);
        double rRatio = Math.pow(r2/r1,0.5);
        double v1rRatio = (v1*(rRatio));
        System.out.println("-----------\nVelocity Ratio: "+(v2/v1));
        System.out.println("Radius Ratio: "+rRatio);
        System.out.println("v1: "+v1+"\nv2: "+v2);
        System.out.println("v1*rRatio (v2): "+v1rRatio);

    }  
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Radius 1: ");
        double r1 = input.nextDouble();
        System.out.print("Radius 2: ");
        double r2 = input.nextDouble();
        System.out.print("Max Acceleration: ");
        double a = input.nextDouble();
        calculate(r1,r2,a);
        input.close();


    }
 }
