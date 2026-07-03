#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdint>

int main(){

    int n; 
    std::cin >> n;

    std::vector<std::pair<long long, long long>> arr(n);

    for (auto &x : arr)
        std::cin >> x.first;

    for (auto &x : arr){
        long long log3x = x.first;
        long long second = 0;
        while (log3x % 3 == 0){
            second += 1;
            log3x /= 3;
        }
        x.second = second;
    }

    std::sort(arr.begin(), arr.end(), 
        [](std::pair<long long, long long> x, std::pair<long long, long long> y){
            if (x.second == y.second){
                return x.first < y.first;
            }
            else {
                // we want higher divisors of 3 first
                return x.second > y.second;
            }
        }
    );
    for (auto &x : arr){
        std::cout << x.first << ' ';

    }
}