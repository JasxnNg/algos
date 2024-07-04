class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0)
            return 1; 
        // now let's do all the other cases 
        else if (n > 1) {
            if (n % 2 == 0) {
                return myPow(x * x, n/2);
            }
            else 
                return myPow(x * x, n/2) * x;
        }
        else {
            if (n == -1) 
                return 1/x; 
            else if (n % 2 == 0){
                return myPow(x * x, n/2);
            }
            else 
                return myPow(x * x, n/2) * 1/x;
        }
        

    }
};