import java.util.Scanner;
class KSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); 

        for (int i = 0; i < n; i++) {
            int inputs = sc.nextInt();
            int[] arr = new int[inputs];
            for (int j = 0; j < inputs; j++) {
                arr[j] = sc.nextInt();
            }

            int temp = 0; 
            int previousElement = 0; 
            int max = 0; 
            int sum = 0; 

            for (int j = 0; j < inputs; j++) {
                if (arr[j] < previousElement) {
                    temp = previousElement - arr[j];
                    if (temp > max) {
                        max = temp;
                    }
                    sum += temp; 
                }
                else {
                    previousElement = arr[j];
                }
            }

            System.out.println((max + sum) + " " ); 


        }

        sc.close();

    }


}

