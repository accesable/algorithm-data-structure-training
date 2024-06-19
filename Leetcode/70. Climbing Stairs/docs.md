# Intuition
Recursive as the condition of one step or two steps
# Approach
Recursive pose an time complexity of 
$$O(2^n)$$ 
. **Dynamic Programming** Approach comes into.

# Complexity
- Time complexity:
$$O(n)$$

- Space complexity:
$$O(n)$$
# Code
```
class Solution {
public:
    int climbStairs(int n) {
        if(n <= 1){
            return n;
        }
        int dp[n+1];
        dp[2] = 2;
        dp[1] = 1;
        for(int i = 3 ; i <=n;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};
```
# Improved 
# Intuition
After have done with Dynamic Programming approach with Array to contain subproblem's solutions
# Approach
i realized that i only need to use the 2 previous index away from the current i -> n so no need to save the solution,in which are more 2 index away from i
# Complexity
- Time complexity:
$$O(n)$$

- Space complexity:
$$O(3)$$ for storing 3 value only 

# Code
```
class Solution {
public:
    int climbStairs(int n) {
        if(n <= 1){
            return n;
        }
        int prev1 = 1;
        int prev2 = 2;
        int current;
        for(int i = 3 ; i<=n;i++){
            current = prev1 + prev2;
            prev1 = prev2;
            prev2 = current;
        }
        return current;
    }
};
```
