#include <vector>
#include <iostream>
#include <algorithm>

void solve(){
    int value;
    std::cin >> value;

    int digits = 0;
    for (;value != 0;digits++,value /=10);

    std::cout << '1';
    for (int i = 1; i < digits; i++){
        std::cout << '0';
    }

    std::cout << '1' << '\n';

    
    

}

int main(){
    int iterations;
    std::cin >> iterations;

    for (int i = 0; i < iterations ; i++){
        solve();
    }
}