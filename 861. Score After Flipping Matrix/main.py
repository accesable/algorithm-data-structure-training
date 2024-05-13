from typing import List

t1 = [[0,0,1,1],[1,0,1,0],[1,1,0,0]]
t2 = [[0]]

def matrixScore(grid: List[List[int]]) -> int:
    columns = len(grid[0]) # n
    rows = len(grid) # m
    for i in range(rows):
        if grid[i][0] == 0 :
            toggle_row(i,grid=grid)
    # print("before loop grid",grid)
    for i in range(1,columns):
        column_one_sum = 0
        for j in range(rows):
            if grid[j][i]==1:
                column_one_sum+=1
        if column_one_sum < rows/2:
            # print("Toggle columns",i,column_one_sum,int(rows/2))
            toggle_column(i,grid=grid)
    return calculate_score(grid)


def toggle_row(row_index : int,grid: List[List[int]]):
    for i in range(len(grid[row_index])) :
        if grid[row_index][i] == 0:
            grid[row_index][i] = 1
        else :
            grid[row_index][i] = 0
    # return grid

def toggle_column(column_index : int,grid: List[List[int]]):
    for i in range(len(grid)) :
        if grid[i][column_index] == 0:
            grid[i][column_index] = 1
        else :
            grid[i][column_index] = 0
    # return grid

def calculate_score(matrix):
    score = 0
    for row in matrix:
        binary_number = int(''.join(map(str, row)), 2)
        score += binary_number
    return score

print(matrixScore(t1))
# print(toggle_column(0,t1))
