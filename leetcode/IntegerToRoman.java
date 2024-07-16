import java.lang.StringBuilder;
class IntegerToRoman {
    public String intToRoman(int num) {
        StringBuilder newStr = new StringBuilder(); 
        int current = 0; 
        int count = 0; 
        while (num > 0){
            if (num / 1000 > 0) {
                newStr.append('M'); 
                num -= 1000;
            }
            else if (num / 500 > 0) {
                newStr.append('D'); 
                num -= 500;
            }
            else if (num / 100 > 0) {
                newStr.append('C'); 
                count++; 
                current = 100;
                num -= 100;
            }
            else if (num / 50 > 0) {
                newStr.append('L'); 
                num -= 50;
            }
            else if (num / 10 > 0) {
                newStr.append('X'); 
                if (current == 10)
                    count++; 
                else {
                    count = 1; 
                }
                current = 10;
                num -= 10;
            }
            else if (num / 5 > 0){
                newStr.append('V'); 
                num -= 5;
            }
            else {
                num--; 
                newStr.append('I');
                if (current == 1)
                    count++;
                else {
                    count = 1; 
                }
                current = 1;  

            }

            if (count == 4) {
                if (current == 1) {
                    newStr.delete(newStr.length() - 4, newStr.length() ); 
                    newStr.append('I'); 
                    newStr.append('V');
                }
                else if (current == 10) {
                    newStr.delete(newStr.length() - 4, newStr.length()); 
                    newStr.append("X");
                    newStr.append("L"); 
                }
                else if (current == 100) {
                    newStr.delete(newStr.length() - 4, newStr.length() ); 
                    newStr.append("CD"); 
                }
                count = 0; 
            
            }

        }
        return newStr.toString(); 
    }
    public static void main(String[] args) {
        IntegerToRoman obj = new IntegerToRoman(); 
        System.out.println(obj.intToRoman(3769)); 
    }
}