import java.util.Scanner;

public class Watermelon{
    public static void main(String[] args) {
        Scanner myObj = new Scanner(System.in); 
        int s = myObj.nextInt(); 
        if (s % 2 == 0 && s > 2)
            System.out.println("YES");
        else 
            System.out.println("NO");
        myObj.close();
       // max = ((s % 4) == 0) ? System.out.println("YES") : System.out.println("NO");
    } 

}