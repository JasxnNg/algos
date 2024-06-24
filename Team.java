import java.util.Scanner;
public class Team{
    public static void main(String[] commandLine) {
        Scanner o = new Scanner(System.in); 
        String p = o.nextLine(); 
        int temp = 0; 
        int sum = 0; 
        for (int i = 0; i < Integer.parseInt(p); i++){
            temp += o.nextInt() + o.nextInt() + o.nextInt(); 
            if (temp > 1) 
                sum ++; 
            temp = 0; 
            
        }
        System.out.println(sum +"");
    }
}