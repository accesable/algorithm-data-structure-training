#include <iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n <= 1){
            return n;
        }
        int dp[n+1];
        dp[1] = 1;
        dp[2] = 2;
        for(int i = 3; i <= n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }

    int climbStairsSpaceOptimized(int n) {
        if(n <= 1){
            return n;
        }
        int prev1 = 1;
        int prev2 = 2;
        int current = 0;
        for(int i = 3; i <= n; i++){
            current = prev1 + prev2;
            prev1 = prev2;
            prev2 = current;
        }
        return prev2; // 'prev2' holds the value of the nth step in the end
    }
};

int main() {
    Solution solution;

    cout << "Testing climbStairs function:" << endl;
    for(int n = 1; n <= 45; n++) {
        cout << "n = " << n << ", ways = " << solution.climbStairs(n) << endl;
    }

    cout << "\nTesting climbStairsSpaceOptimized function:" << endl;
    for(int n = 1; n <= 45; n++) {
        cout << "n = " << n << ", ways = " << solution.climbStairsSpaceOptimized(n) << endl;
    }

    return 0;
}

