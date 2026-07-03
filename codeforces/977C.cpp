#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdint>

int main(){
    int n, k;
    std::cin >> n >> k;

    std::vector<int>arr(n);

    for(auto &x : arr)
        std::cin >> x;

    std::sort(arr.begin(), arr.end()); 
    if (k == 0){
        if (arr[k] == 1)
            std::cout << "-1" << '\n';
        else
            std::cout << "1\n";
    } else {
        if (k == n)
            std::cout << arr[n - 1] << '\n';
        else {
            if (arr[k - 1] == arr[k])
                std::cout << "-1" << '\n';
            else
                std::cout << arr[k-1] << '\n';  

        }

    }

}