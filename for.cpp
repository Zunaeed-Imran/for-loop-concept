#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            for (int k = 0; k < 3; k++) {
                cout << i << j << k << endl;
            }
        }
    }
    return 0;
}


// i = 1
// j = 1
// k = 3

// i-0, j-0, k-0;
// i-0, j-0, k-1;
// i-0; j-0; k-2;

// for(i){
//   for(j){
//     for(k){
      
//     }
//   }
// }