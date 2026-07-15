#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdint>

void solve(){   
    int n;
    std::cin >> n;

    char start; 
    int running = 0;
    int mex = 0; 
    for (int i = 0; i < n; i++){
        std::cin >> start;
        if (start == '#'){
            running += 1;
            mex = std::max(running, mex);
        } else {
            running = 0;
        }
    }

    std::cout << (mex + 1) / 2 << '\n';
}

int main(){
    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
}