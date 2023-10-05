import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        double h = input.nextDouble();
        System.out.print("\nWeight: ");
        double w = input.nextDouble();
        double bmi = h/(w*w)*703;
      
        if(bmi>=30){System.out.print("BMI = "+bmi+"\nObese");}
        else if(bmi>=25){System.out.print("BMI = "+bmi+"\nOverweight");}
        else if(bmi>=18.5){System.out.print("BMI = "+bmi+"\nNormal");}
        else{System.out.print("BMI = "+bmi+"\nUnderweight");}

    }
}
