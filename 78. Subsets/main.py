from typing import List
t1 = [1,2,3]

def back_tracking(A):
    a = A.pop()
    if(len(A)==0): print(A)
    else :
        back_tracking(A)
    A.append(a)
    print(A)

def main(): 
    back_tracking([1,2,3])
  

def subsets(self, nums: List[int]) -> List[List[int]]:
    pass
if __name__=="__main__": 
    main() 