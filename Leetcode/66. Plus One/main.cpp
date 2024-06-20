#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int r = 1;
        int n = digits.size();
        vector<int> reVal;
        int num;

        for (int i = n - 1; i >= 0; i--) {
            num = digits[i] + r;
            if (num > 9) {
                r = 1;
                reVal.push_back(0);
            } else {
                r = 0;
                reVal.push_back(num);
            }
        }
        if (r > 0) reVal.push_back(r);

        reverse(reVal.begin(), reVal.end());
        return reVal;
    }
};

void printResult(const vector<int>& result) {
    for (int digit : result) {
        cout << digit << " ";
    }
    cout << endl;
}

int main() {
    Solution solution;

    vector<vector<int>> testCases = {
        {1, 2, 3},        // Example input: 123
        {9, 9, 9},        // Example input: 999
        {0},              // Example input: 0
        {8, 9, 9, 9},     // Example input: 8999
        {1, 0, 0, 0},     // Example input: 1000
        {2, 5, 9},        // Example input: 259
        {4, 3, 2, 1},     // Example input: 4321
        {1, 9},           // Example input: 19
        {7, 2, 6, 5, 4},  // Example input: 72654
        {5}               // Example input: 5
    };

    for (auto& digits : testCases) {
        vector<int> result = solution.plusOne(digits);
        cout << "Input: ";
        printResult(digits);
        cout << "Output: ";
        printResult(result);
        cout << endl;
    }

    return 0;
}

