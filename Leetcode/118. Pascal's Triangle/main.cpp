   #include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> g;
        for(int i = 0; i < numRows; i++) {
            vector<int> g1(i + 1, 1);
            for(int j = 1; j < i; j++) {
                g1[j] = g[i - 1][j] + g[i - 1][j - 1];
            }
            g.push_back(g1);
        }
        return g;
    }
};

void printPascalTriangle(const vector<vector<int>>& triangle) {
    for (const auto& row : triangle) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    Solution solution;
    
    int numRows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> numRows;
    
    vector<vector<int>> result = solution.generate(numRows);

    cout << "Pascal's Triangle with " << numRows << " rows:" << endl;
    printPascalTriangle(result);

    return 0;
}
 
