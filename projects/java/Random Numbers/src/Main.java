public class Main {
    public static void main(String[] args){
        int num1 = (int)(Math.random()*6)+1;
        int num2 = (int)(Math.random()*6)+1;
        if((num1+num2)==2){
            if(num1==num2){
                System.out.print("Doubles!");
            }
            else{
                System.out.print("Snake-eyes!");
            }
        }
    }
}   

