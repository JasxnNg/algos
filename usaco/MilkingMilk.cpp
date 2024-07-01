#include <algorithm>
#include <cstdio>
#include <vector>
#include <iostream>

using std::vector;

int main () {
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    int contains [3] = {0, 0, 0}; 
    int capacity [3] = {0, 0, 0}; 
    for (int i = 0; i < 3; i++ ){
        std::cin >> capacity[i] >> contains[i]; 
        // std::cout << contains[i] << " ";
    }

    int pour = 0; 
    int remains = 0; 
    for (int i = 0; i < 100; i++) {
        pour = contains[i % 3 ] + contains[ (i + 1) % 3 ]; 
        if (pour > capacity[(i + 1) % 3]){
            contains[i % 3] = pour - capacity[(i + 1 ) % 3];
            contains[(i + 1) % 3 ] = capacity[(i + 1) % 3]; 
        
        }
        else {
            contains[i % 3] = 0; 
            contains[(i + 1) % 3] = pour; 
           
        }
        // std::cout << contains[0 ] << " " << contains[1 ] << " " <<contains[2] << " " << i <<'\n';

    }
    std::cout << contains[0] << '\n' << contains[1] << '\n' << contains[2] <<'\n'; 
    return 0; 
}