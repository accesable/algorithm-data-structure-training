from typing import List,Tuple
t1 = [[0,6,0],[5,8,7],[0,9,0]]
t2 = [[1,0,7],[2,0,6],[3,4,5],[0,3,0],[9,0,20]]
t3 = [[1,0,0],[2,5,0],[3,4,0]]
def getMaximumGold(grid: List[List[int]]) -> int:
    columns = len(grid[0]) # n
    rows = len(grid) # m
    maxGold = 0
    for i in range(rows):
        for j in range(columns):
            if grid[i][j] != 0 :
                max_index_gold : int = dfs(grid=grid,index=(i,j),currentGold=0)
                if max_index_gold > maxGold:
                    maxGold = dfs(grid=grid,index=(i,j),currentGold=0)
    return maxGold

def dfs(grid: List[List[int]], index: Tuple[int, int], currentGold: int) -> int:
    rows, cols = len(grid), len(grid[0])
    x, y = index
    currentGold += grid[x][y]
    maxGold = currentGold

    # Temporarily mark the current cell as visited
    original_value = grid[x][y]
    grid[x][y] = 0

    # Define possible moves: up, down, left, right
    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]

    for dx, dy in directions:
        nx, ny = x + dx, y + dy
        if 0 <= nx < rows and 0 <= ny < cols and grid[nx][ny] != 0:
            maxGold = max(maxGold, dfs(grid, (nx, ny), currentGold))

    # Restore the original value (backtrack)
    grid[x][y] = original_value

    return maxGold


print(getMaximumGold(grid=t3))