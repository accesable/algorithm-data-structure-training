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
```py
class Solution:
    def matrixScore(self, grid: List[List[int]]) -> int:
        columns = len(grid[0]) # n
        rows = len(grid) # m
        for i in range(rows):
            if grid[i][0] == 0 :
                self.toggle_row(i,grid=grid)
        # print("before loop grid",grid)
        for i in range(1,columns):
            column_one_sum = 0
            for j in range(rows):
                if grid[j][i]==1:
                    column_one_sum+=1
            if column_one_sum < rows/2:
                # print("Toggle columns",i,column_one_sum,int(rows/2))
                self.toggle_column(i,grid=grid)
        return self.calculate_score(grid)


    def toggle_row(self,row_index : int,grid: List[List[int]]):
        for i in range(len(grid[row_index])) :
            if grid[row_index][i] == 0:
                grid[row_index][i] = 1
            else :
                grid[row_index][i] = 0
        # return grid

    def toggle_column(self,column_index : int,grid: List[List[int]]):
        for i in range(len(grid)) :
            if grid[i][column_index] == 0:
                grid[i][column_index] = 1
            else :
                grid[i][column_index] = 0
        # return grid

    def calculate_score(self,matrix):
        score = 0
        for row in matrix:
            binary_number = int(''.join(map(str, row)), 2)
            score += binary_number
        return score
```
# Best Solution
```py
class Solution:
    def matrixScore(self, grid: List[List[int]]) -> int:

        rows,cols = len(grid),len(grid[0])
        for r in range(rows):
            if grid[r][0] == 0:
                for c in range(cols):
                    if grid[r][c] == 0:
                        grid[r][c] = 1
                    else:
                        grid[r][c] = 0

        counts = collections.defaultdict(int)
        for c in range(1,cols):
            for r in range(rows):
                if grid[r][c] == 0:
                    counts[c] += 1

        res = rows * (2**(cols-1))
        for c in range(1,cols):
            res += max(counts[c],rows - counts[c])*2**(cols - c - 1)

        return res
```
```py
class Solution:
    def matrixScore(self, grid: List[List[int]]) -> int:
        def flipr(rownum, grid):
            for i in range(len(grid[0])):
                grid[rownum][i] = grid[rownum][i]^1       
        def flipc(colnum, grid):
            for i in range(len(grid)):
                grid[i][colnum] = grid[i][colnum]^1        
        for i in range(len(grid)): 
            if grid[i][0] == 0:
                flipr(i, grid)       
        columnLen = len(grid)
        columnCountOf1 = []        
        for i in range(len(grid[0])):
            ans = 0
            for j in range(len(grid)):
                if grid[j][i] == 1:
                    ans+=1
            columnCountOf1.append(ans)       
        for i in range(len(columnCountOf1)):
            if columnCountOf1[i] <= columnLen//2:
                flipc(i, grid)       
        total = 0
        for i in grid:
            total += int(''.join(map(str,i)), 2)
        return total
```
```py
class Solution:
    def matrixScore(self, A: List[List[int]]) -> int:
        M, N = len(A), len(A[0])
        
        for i in range(M):
            if A[i][0] == 0:
                for j in range(N): A[i][j] ^= 1
        
        for j in range(N):
            cnt = sum(A[i][j] for i in range(M))
            if cnt < M - cnt:
                for i in range(M): A[i][j] ^= 1
        return sum(int(''.join(map(str, A[i])), 2) for i in range(M))
```