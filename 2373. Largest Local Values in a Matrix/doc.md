[LeetCode Link](https://leetcode.com/problems/largest-local-values-in-a-matrix/description/?envType=daily-question&envId=2024-05-12) \
[My Submission Solution Link](https://leetcode.com/problems/largest-local-values-in-a-matrix/?envType=daily-question&envId=2024-05-12)

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->

# Approach
<!-- Describe your approach to solving the problem. -->

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```python
class Solution:
    def largestLocal(self, grid: List[List[int]]) -> List[List[int]]:
            maxLocalSize = (len(grid)-2)
            l = self.generate_empty_matrix(maxLocalSize)
            for i in range(len(l)):
                for j in range(len(l[i])):
                    l[i][j] = self.findMaxLocal(j,i,matrix=grid)
            return l

    def findMaxLocal(self,column,row,matrix):
        max = 0
        for i in range(column,column+3):
            for j in range(row,row+3):
                # print(matrix[j][i])
                if matrix[j][i] >= max :
                    max = matrix[j][i]
        return max


    def generate_empty_matrix(self,n):
        k = []
        for i in range(n):
            h = []
            for j in range(n):
                h.append((j,i))
            k.append(h)
        return k
```