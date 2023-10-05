import java.util.*;
public class Main{
	public static Integer smallest(ArrayList<Integer> list){
		Integer smallest=list.get(0);
		for(Integer item : list){
			if(item<smallest){ smallest=item;}
		}
		return smallest;
	}
	public static String longest(ArrayList<String> list){
		String longest = "";
		for(int i=0;i<list.size();i++){
			if(list.get(i).length()>longest.length()){ longest=list.get(i);}
		}
		return longest;
	}
	public static void remove(ArrayList<Integer> list, int remove){
		for(int i=0;i<list.size();i++){
			if(list.get(i).equals(remove)){ list.remove(i);}
		}
	}
	public static void main(String[] args){
		ArrayList<Integer> ints = new ArrayList<Integer>();
		ArrayList<String> strings = new ArrayList<String>();
		ints.add(0);
		ints.add(1);
		ints.add(2);
		ints.add(3);
		strings.add("0");
		strings.add("1");
		strings.add("2");
		strings.add("3");
		strings.add("adadadad1");
		System.out.println(longest(strings));
		System.out.println(smallest(ints));
		remove(ints,2);
		System.out.print(ints.toString());
	}
}


