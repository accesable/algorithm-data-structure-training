import itertools
n_a = input("")
n,a = int(n_a.split(" ")[0]), int(n_a.split(" ")[1])
l=[]
for i in range(n):
    l.append(int(input("")))

def is_triangle(a,b,c):
    return a + b > c and a + c > b and b + c > a

def minium_triangle_perimeter(l,a):
    minium_distance = 1000000000000000
    c = 0
    final_side = tuple() 
    has_triangle = False
    for i in range(len(l)-2):
        for j in range(i+1,len(l)-1):
            for k in range(j+1,len(l)):
                if(is_triangle(l[i],l[j],l[k])):
                    has_triangle = True
                    perimeter = l[i]+l[j]+l[k]
                    c+=1
                    if minium_distance > abs(a-perimeter):
                        minium_distance = abs(a-perimeter)
                        final_side = (l[i],l[j],l[k])
    if has_triangle:
        print("Final : ",final_side)
        print("Counter : ",c)
        return final_side[0] + final_side[1] + final_side[2]
    else: return "UNSOL"


print(minium_triangle_perimeter(l,a))