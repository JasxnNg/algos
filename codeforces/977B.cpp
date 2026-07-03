#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdint>

int main(){

    int start = int('A');
    int end = int ('Z'); 
    int hi = (end - start + 1); 
    int n;
    std::vector<int> arr(hi * hi); 

    std::cin >> n;

    std::string str; 
    std::cin >> str;

    int idx = (int(str[0]) - start) * hi; 
    for (int i = 1; i < n; i++){
        idx += int(str[i]) - start;
        arr[idx] += 1;
        idx = idx % hi; 
        idx *= hi;
        // std::cout << idx; 
    }
    auto max_it = std::max_element(arr.begin(), arr.end());
    int max_index = std::distance(arr.begin(), max_it);

    
    char first = max_index / hi + start; 
    char second = max_index % hi + start; 

    std::cout << first << second << '\n';

}