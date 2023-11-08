#include <iostream>
#include <vector>
#include<limits.h>

using namespace std;

int main() {
    vector<int> arr = {5, 12, 9, 7, 15, 3};

    if (arr.size() < 2) {
        cout << "Array should have at least two elements" << endl;
        return 1;
    }

    int max_num = INT_MIN;
    int second_max = INT_MIN;

    for (int num : arr) {
        if (num > max_num) {
            second_max = max_num;
            max_num = num;
        } else if (num > second_max && num != max_num) {
            second_max = num;
        }
    }

    if (second_max == INT_MIN) {
        cout << "There is no second maximum in the array" << endl;
    } else {
        cout << "Maximum number: " << max_num << endl;
        cout << "Second Maximum number: " << second_max << endl;
    }

    return 0;
}
