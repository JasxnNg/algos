#include <vector>
#include <iostream>
#include <algorithm>



int main(){
    freopen("promote.in", "r", stdin);
    int bronzeb, bronzea, silverb, silvera, goldb, golda, platb, plata;

    std::cin >> bronzeb >> bronzea; 
    std::cin >> silverb >> silvera; 
    std::cin >> goldb >> golda; 
    std::cin >> platb >> plata; 

    fclose(stdin);

    int platpromos = plata - platb; 
    int goldpromos = golda - goldb + platpromos; 
    int silverpromos = silvera - silverb + goldpromos; 
    
    
    freopen("promote.out", "w", stdout);


    std::cout << silverpromos << '\n';
    std::cout << goldpromos << '\n'; 
    std::cout << platpromos << '\n';

    fclose(stdout); 
}