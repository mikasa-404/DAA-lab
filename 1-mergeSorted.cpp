#include <iostream>
#include <vector>

using namespace std;

void mergeSortedArrays(vector<int>& A, int m, vector<int>& B, int n, vector<int>& C) {
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    while (i < m) {
        C[k++] = A[i++];
    }

    while (j < n) {
        C[k++] = B[j++];
    }
}

int main() {
    vector<int> A = {1, 3, 5, 7};
    vector<int> B = {2, 4, 6};
    int m = A.size();
    int n = B.size();
    vector<int> C(m + n);

    mergeSortedArrays(A, m, B, n, C);

    cout << "Merged Sorted Array C: ";
    for (int i = 0; i < m + n; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
