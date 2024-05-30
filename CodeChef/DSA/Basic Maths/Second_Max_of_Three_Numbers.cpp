#include <iostream>
using namespace std;

int main() {
    int testcases;
    cin >> testcases;
    int maxnums[testcases]; // Array size should be specified
    for (int i = 0; i < testcases; i++) {
        int inputnum[3]; // Array size should be specified
        int temp; // Corrected variable name
        for (int k = 0; k < 3; k++) {
            cin >> inputnum[k];
        }
        
        for (int a = 0; a < 3; a++) {
            for (int j = 0; j < 3; j++) {
                if (inputnum[a] < inputnum[j]) {
                    temp = inputnum[a];
                    inputnum[a] = inputnum[j];
                    inputnum[j] = temp;
                }
            }
        }
        maxnums[i] = inputnum[1];
    }
    
    for (int i = 0; i < testcases; i++) {
        cout << maxnums[i] << endl;
    }
    return 0;
}
