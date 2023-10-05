import java.util.*;
import java.util.regex.*;
public class Main {
  
  public static String pigLatinIfier(String input){
  boolean vowel = Pattern.matches("[aeiou]", input.substring(0,1)); 
  boolean twoThing = Pattern.matches("[twpcrs]h", input.substring(0,2));
  
    if(vowel){
      return input+="ay";
    }
    else if(twoThing){
      String latin=input+input.substring(0,2);
      latin=latin.substring(2)+"ay";
      return latin;
    }
    else{
      String latin=input+input.substring(0,1);
      latin=latin.substring(1)+"ay";
      return latin;
    }
  }  

  public static void main(String[] args)
  {
    Scanner input = new Scanner(System.in);
    System.out.print("String: ");
    System.out.print(pigLatinIfier(input.next()));
    
    input.close();
  }
}
