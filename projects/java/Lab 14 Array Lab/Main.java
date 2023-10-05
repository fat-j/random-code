class Main {

    public static double average(int[] array){
        double avg=0;
        for(int num : array){
           avg+=num;
        }
        return (avg/array.length);
    }

    public static int countAboveAve(int[] array){
        int count = 0;
        for(int num : array){
            if(num > average(array)){
                count++;
            }
        }
        return count;
    }

    public static int largest(int[] array){
        int largest = 0;
        for(int num : array){
            if(num > largest){ largest = num; }
        }
        return largest;
    }

    public static int indexOfSmallest(int[] array){
        int smallest = array[0];
        int index = 0;
        int smallestIndex = 0;
        for(int num : array){
            if(num < smallest){ 
                smallest = num;
                smallestIndex = index;
            }
            index++;
        }
        return smallestIndex;
    }
    

    public static void main(String[] args){
	    int[] ar1 = {0,1,2,3,4,5};
	    System.out.print("Average: "+average(ar1)+"\n");
	    System.out.print("Above Avg: "+countAboveAve(ar1)+"\n");
	    System.out.print("Largest: "+largest(ar1)+"\n");
	    System.out.print("Smallest Index: "+indexOfSmallest(ar1)+"\n");
    }
}

