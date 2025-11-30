#include <iostream>
using namespace std;

void multiplySparse(int A[][3], int a_nonzero, int B[][3], int b_nonzero) {
    if (A[0][1] != B[0][0]) {
        cout << "Matrix multiplication NOT possible.\n";
        return;
    }
    int result[50][3];
    int k = 1; 
    result[0][0] = A[0][0];     
    result[0][1] = B[0][1];     

    for (int i = 1; i < a_nonzero; i++) {
        for (int j = 1; j < b_nonzero; j++) {
            if (A[i][1] == B[j][0]) {
                int r = A[i][0];
                int c = B[j][1];
                int v = A[i][2] * B[j][2];

                int found = 0;
                for (int x = 1; x < k; x++) {
                    if (result[x][0] == r && result[x][1] == c) {
                        result[x][2] += v;
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    result[k][0] = r;
                    result[k][1] = c;
                    result[k][2] = v;
                    k++;
                }
            }
        }
    }

    result[0][2] = k - 1; 

    cout << "\nResultant Sparse Matrix (Triplet Form):\n";
    for (int i = 0; i < k; i++) {
        cout << result[i][0] << " "
             << result[i][1] << " "
             << result[i][2] << endl;
    }
}

int main() {

    int A[][3] = {
        {3, 3, 4},   
        {0, 0, 2},
        {0, 2, 3},
        {1, 1, 4},
        {2, 0, 1}
    };

    int B[][3] = {
        {3, 3, 4},
        {0, 1, 5},
        {1, 2, 7},
        {2, 0, 6},
        {2, 2, 1}
    };
    int a_nonzero = 5;
    int b_nonzero = 5;
    multiplySparse(A, a_nonzero, B, b_nonzero);
  
    return 0;
}
