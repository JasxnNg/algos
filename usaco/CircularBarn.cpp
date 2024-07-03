#include <algorithm>
#include <cstdio>
#include <vector>
#include <iostream>

using namespace std; 

int main () {
    freopen("cbarn.in", "r", stdin); 
    freopen("cbarn.out", "w", stdout);
    int numRooms; 
    scanf("%d", &numRooms); 
    vector <int> capacity (numRooms); 
    int totalCows = 0; // keeps track of all of the things 
    for (int i = 0; i < numRooms; i ++) {
        cin >> capacity[i];  
        totalCows += capacity[i]; 
    }
    
    int max = totalCows * numRooms; 
   // cout << totalCows << '\n'; 
    
    for (int i = 0; i < numRooms; i++) {
        int temp = 0; 
        int remainingCows = totalCows; 
        for (int j = 0; j < numRooms; j++) {
        
            remainingCows -= capacity[ (i + j ) % numRooms]; 
            temp += remainingCows; 
        }
        if (temp < max){
            max = temp; 
        }
    }
    cout << max; 
    return 0; 
} 