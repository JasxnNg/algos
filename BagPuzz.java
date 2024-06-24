public class BagPuzz{

/*
 * 1- 1- 1
 * 1- 1- 0 
 * 0- 1- 0
 * 0- 1- 1
 * 0- 0- 1
 * 0- 0- 0
 */

 /*
  * 1- 1
  * 0- 1
  * 0- 0 
  */

/* 1- 1- 1- 1 
*  1- 1- 0- 1 
*  1- 1- 0- 0 
*  0- 1- 0- 0 
*  0- 1- 0- 1 
*  0- 1- 1- 1 
*  0- 1- 1- 0
*  0- 0- 1- 0 
*  0- 0- 1- 1 
*  0- 0- 0- 1 
*  0- 0- 0- 0
 */

 /*
--------THOUGHT PROCESS RIGHT NOW--------------

We want to flip the first beg in this entire sequence
- In order to flip the first bit, we have to flip the first n - 2 bits
    - if n - 2 = 1 
        flip the 

  */

    public static void decode(int[] input) {
        boolean yes = false; 
        for (int i = 0; i < input.length - 2; i ++) {
            
            yes |= (input[i] == 1);  
        }
        if (yes) { // now we want to flip the last n - 2 bits
            
            
        }
        if (input[input.length - 1 ] == 1 && input[input.length - 2 ] == 0) {
            System.out.println("flip 1");
        }
        if (input[input.length - 1 ])
        if (input == 1) {
            System.out.println("1");
        }
        else if (input = 2) {

        }

    }


    public static void main(String[] args) {

    }
}