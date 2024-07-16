#include <algorithm>
#include <cstdio>
#include <vector>
#include <iostream>

using namespace std; 

int main () {
    int lines; 
    vector<int> arr (3); 
    cin >> lines;
    int minimum = 0; 
    for (int i = 0; i < lines; i++) {
        cin >> arr[0] >> arr[1] >> arr[2];  
        for (int j = 0; j < 5; j++) {
            sort(arr.begin(), arr.end());
            arr[0]++; 
       
        }
        cout << arr[0] * arr[1] * arr[2] << '\n'; 

    }
    return 0;
} 