import math
import itertools

def can_form_triangle(a, b, c):
    return a + b > c and a + c > b and b + c > a

def triangle_area(a, b, c):
    s = (a + b + c) / 2
    return math.sqrt(s * (s - a) * (s - b) * (s - c))

def find_smallest_area_triangle(l):
    l.sort()
    min_area = float('inf')
    best_triangle = None

    for a, b, c in itertools.combinations(l, 3):
        if can_form_triangle(a, b, c):
            area = triangle_area(a, b, c)
            if area < min_area:
                min_area = area
                best_triangle = (a, b, c)

    if best_triangle:
        return "{} {} {}".format(best_triangle[0], best_triangle[1], best_triangle[2])
    else:
        return "UNSOL"

def main():
    n = int(input(""))
    l = [int(input()) for _ in range(n)]
    result = find_smallest_area_triangle(l)
    print(result)

if __name__ == "__main__":
    main()
