#include <algorithm>
#include <cstdio>
#include <vector>
#include <iostream>

using namespace std; 

int main () {
    //freopen("hi.txt", "r", stdin);
    int lines; 
    int length, size; 
    cin >> lines;
    int maximum = 0; 
    int curr = 0; 
    int sum; 
    for (int i = 0; i < lines; i++) {
        sum = 0; 
        maximum = 0;
        cin >>  length >> size; 
        //cout << size << '\n';
        // need to iterate over the size of the array
        for (int j = 0; j < size; j++){
            cin >> curr; 
            maximum = max(curr, maximum); 
            if (curr == 1) {
                sum += 1; 
            } 
            else{
                sum += 2 * curr - 1; 
            }
        }
        sum -= (2 * maximum - 1);
        cout << sum << '\n';
    }
    return 0;
} 