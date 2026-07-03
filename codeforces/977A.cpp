#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdint>


// void solve(){

// }

int main(){

    int n, k;
    std::cin >> n >> k;

    for (int i = 0; i < k; i++){
        if (n % 10 == 0)
            n /= 10;
        else 
            n -= 1;
    }
    std::cout << n << '\n';

}