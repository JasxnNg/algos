import java.util.Arrays;


// we can't use the same array because 
// we run the risk of overwriting past data 
// but with quick sort, this isn't really a problem 
public class Mergesort{
    public static void main (String[] args) {
        int [] arr = {123123, 123122, 232, 3, 40, 50, 5, 6,7, 1}; 
        mergesort(arr );
        for (int i = 0; i < arr.length; i ++) {
            System.out.println(arr[i] + "");
        }
    } 
    public static void mergesort(int[] array) {
        if ((array.length) > 1) {
            int piv = array.length / 2; 
            int [] firstArr = Arrays.copyOfRange(array, 0, piv);  
            mergesort(firstArr );
            // p(array);
            // System.out.println("start: " + start + " piv: " +  piv +  " end: " + end );
            int [] secondArr = Arrays.copyOfRange(array, piv, array.length); 
            mergesort(secondArr);
            merge(array, firstArr, secondArr);
        }


    }
    public static void merge (int[] array, int[] firstArr, int[] secondArr ) {
        int secondPos = 0; 
        int firstPos = 0; 
        for (int i = 0; i < (firstArr.length + secondArr.length  ); i ++ ){
            if (secondPos == secondArr.length) {
                array[i] = firstArr[firstPos++];
            }
            else if (firstPos == firstArr.length) {
                array[i] = secondArr[secondPos++];
            }
            else if (firstArr[firstPos] <= secondArr[secondPos]) {
                array[i] = firstArr[firstPos++]; 
            }
            else 
                array[i] = secondArr[secondPos++];

    }
    
        
        
        
    }
    public static void swap (int[] array, int first, int second ) {
        int temp = array[first]; 
        array[first] = array[second]; 
        array[second] = temp;  
    }

    public static void p (int[] array) {
        for (int i = 0; i < array.length; i ++) {
            System.out.println(array[i] +"");
        }
        System.out.println("---------------------");
    }
    public static void power (int[] array, int start, int end ) {
        for (int i = start; i < end; i ++ ) {
            System.out.println(array[i] + "");
        }
        System.out.println("---------------------");
    }
}