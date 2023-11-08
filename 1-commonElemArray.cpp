#include <iostream>
#include <vector>

using namespace std; // Add the using namespace directive

vector<int> findCommonElements(const vector<int>& A, const vector<int>& B) {
    vector<int> C;
    
    for (int elementA : A) {
        for (int elementB : B) {
            if (elementA == elementB) {
                C.push_back(elementA);
                break;  // Exit the inner loop once a common element is found
            }
        }
    }
    
    return C;
}

int main() {
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    vector<int> B = {20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};

    vector<int> C = findCommonElements(A, B);

    cout << "Common elements in arrays A and B: ";
    for (int element : C) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
