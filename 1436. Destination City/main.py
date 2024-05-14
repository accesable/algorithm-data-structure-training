from typing import List
t2 = [["London","New York"],["New York","Lima"],["Lima","Sao Paulo"]]
t1 = [["B","C"],["D","B"],["C","A"]]
t3 = [["A","Z"]]

def destCity(paths: List[List[str]]) -> str:
    
    path_dict = dict()
    for i in paths:
        # print(i)
        path_dict[i[0]] = i[1]

    k = paths[0][0]
    while True:
        if k not in path_dict:
            return k 
        else :
            k = path_dict[k]
    
print(destCity(t1))
print(destCity(t2))
print(destCity(t3))