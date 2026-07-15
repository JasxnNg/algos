#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdint>

#define MOD 1000000007
void solve(){   
    // we either start from -1 or 0 and then everything is positive
    int n;
    std::cin >> n;

    std::vector<int>arr(n);
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    if (arr[0] != -1){
        long long cnt = 1;
        int start = -1;
        for (int i = 0; i < n; i++){
            if (arr[i] != start){
                start = arr[i];
            } else {
                // because (n c k) holy fuck gg bruh
                // -> 2^n-1 i am galatic brain 
                cnt <<= 1;
                cnt %= MOD;
            }
        }
        std::cout << cnt << '\n';
    } else {
        long long cnt = 1; 
        
        int block1 = 0; 
        int block2 = 0; 
        int block3 = 0;
        long long pure = 1;

        int i = 0;

        while (i < n && arr[i] == -1) { 
            block1++, i++;
        }
        while (i < n && arr[i] == -1){}

        
        int start = -2;
        int cnt_neg_1 = 0;
        int current_cnt = 0; 
        long long inbtwn = 1;
        for (int i = 0; i < n;i++){
            if (arr[i] != start){
                start = arr[i];

            } else {
                cnt <<= 1; 
                cnt %= MOD;
            }
        }

        std::cout << cnt << '\n';


    }
}

int main(){

    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
}