import java.util.Scanner;

public class WayTooLong{
    public static void main(String[] commandLine) {
        Scanner myObj = new Scanner(System.in); 
        String s = myObj.nextLine(); 
        int p = Integer.parseInt(s); 
        for (int i = 0; i < p; i++) {
            String str = myObj.nextLine(); 
            // System.out.println("str" + str + "i: " + i);
            if (str.length() > 10){
                System.out.println(str.charAt(0) + "" + (str.length() - 2) + str.charAt(str.length() -1) ); 
            }
            else 
                System.out.println(str);
        }

        myObj.close();
    }
}