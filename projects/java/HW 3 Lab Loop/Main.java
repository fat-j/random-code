import java.util.Scanner;
public static void main(String args[]){
    Scanner input = new Scanner(console.in);
    int in = input.nextInt();
    for(int i=1; i<=in; i++){
           for(int j=i; j<in; j++){
               System.out.print("1");
           }
    }
}
