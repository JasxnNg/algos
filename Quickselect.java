import java.util.Random;
public class Quickselect{
    public static void main (String[] args){
        int [] arr = {123123, 123122, 232, 3, 40, 50, 5, 6,7, 1}; 
        sort(arr, 0, arr.length - 1 );
        for (int i = 0; i < arr.length; i ++) {
            System.out.println(arr[i] + "");
        }

    } 
    public static void sort (int[] array, int start, int end){
        if ((end - start ) > 0) {
            int pivot = (end - start ) / 2 + start;  // choose a pivot element here 
            int newpivot = partition(array, pivot, start, end); 
            // should return the position of the pivot after the array has been sorted
            sort(array, start, newpivot -1 ); 
            sort(array, newpivot + 1, end); 
        }
    
    } 
    public static int partition (int[] array, int pivot, int start, int end) {
        int retvalue = start; 
        swap(array, end, pivot); // swap the pivot position with the end 


        for (int i = start; i < end ; i ++ ){ // go from 0 to the pivot position 
            if (array[i] < array[end] ){
                swap(array, i, retvalue++); 
            }
        }
        swap(array, retvalue , end);
        p(array);
        return retvalue ; 

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
}