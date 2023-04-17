#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                cout << i << j << k << endl;
            }
        }
    }
    return 0;
}


//-------------------------
// i = 2;
// j = 3;
// k = 4;

// i-0, j-0, k-0;
// i-0, j-0, k-1;
// i-0, j-0, k-2;
// i-0, j-0, k-3;
// i-0, j-1, k-0;
// i-0, j-1, k-1;
// i-0, j-1, k-2;
// i-0, j-1, k-3;
// i-0, j-2, k-0;
// i-0, j-2, k-1;
// i-0, j-2, k-2;
// i-0, j-2, k-3;
// i-1, j-0, k-0;
// i-1, j-0, k-1;
// i-1, j-0, k-2;
// i-1, j-0, k-3;
// i-1, j-1, k-0;
// i-1, j-1, k-1;
// i-1, j-1, k-2;
// i-1, j-1, k-3;
// i-1, j-2, k-0;
// i-1, j-2, k-1;
// i-1, j-2, k-2;
// i-1, j-2, k-3;

// for(i=2){
//   for(j=3){
//     for(k=4){
      
//     }
//   }
// }