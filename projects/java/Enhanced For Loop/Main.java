public class Main{
	public String toString(){
		return("("+this.getX() + ", " + this.getY() + ")");
	}
	public static void main(String[] args){
		Point[] pts = {new Point(1,2), new Point(4,5), new Point(2,-4)};
		for(Point item : pts) {
			System.out.print(item + " ");
		}

	}
}
