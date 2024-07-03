#include <algorithm>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std; 

vector<int> asciiValues (string hi){
    vector<int> cArray(26); 
    //cout << hi[0]; 
    for (char i : hi){ 
        cArray[i - 'a']++; 

        
    }
    return cArray;

}

int main () {
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);

    int n; 
    cin >> n;  
    vector<pair<string, string> > hehe (n); 
    for (auto &[word1, word2] : hehe){
        cin >> word1 >> word2; 
    }
    vector<int> totalArr (26); 
	for (const auto &[w1, w2] : hehe) {
        // std::cout << typeid(w1).name() << '\n';
		vector<int> freq1 = asciiValues(w1);
		vector<int> freq2 = asciiValues(w2); 
        for (int j = 0; j < 26; j++) {
            totalArr[j] += std::max(freq1[j], freq2[j]); 
        }
    }

    for (int i = 0; i < 26; i++){
        cout << totalArr[i] << '\n';
    }
    //cout << 'h';
    return 0; 

}