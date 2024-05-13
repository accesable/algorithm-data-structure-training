ex1 = [[1,1,1,1,1],[1,1,1,1,1],[1,1,2,1,1],[1,1,1,1,1],[1,1,1,1,1]]

row = 3
column = 3

def findMaxLocal(column,row,matrix):
    max = 0
    for i in range(column,column+3):
        for j in range(row,row+3):
            # print(matrix[j][i])
            if matrix[j][i] >= max :
                max = matrix[j][i]
    return max


def generate_empty_matrix(n):
    k = []
    for i in range(n):
        h = []
        for j in range(n):
            h.append((j,i))
        k.append(h)
    return k

def foo(matrix) :
    maxLocalSize = (len(matrix)-2)
    l = generate_empty_matrix(maxLocalSize)
    for i in range(len(l)):
        for j in range(len(l[i])):
            l[i][j] = findMaxLocal(j,i,matrix=matrix)

    return l
    

print("Result ",findMaxLocal(0,0,ex1))
print("generate : ",foo(matrix=ex1))