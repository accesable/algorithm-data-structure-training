import math

def sum_of_divisors(n):
    if n == 0:
        return 0
    total = 0
    for i in range(1, int(math.sqrt(n)) + 1):
        if n % i == 0:
            total += i
            if i != n // i:
                total += n // i
    return total

def tim_uoc_chung(a: int, b: int) -> int:
    gcd_ab = math.gcd(a, b)
    return sum_of_divisors(gcd_ab)

def phoi_hop(n: int):
    MOD = 10**9 + 7
    ket_qua = 0
    for i in range(1, n):
        for j in range(i + 1, n + 1):
            ket_qua += tim_uoc_chung(j, i)
        
    ket_qua %= MOD
    print(ket_qua, end="")

if __name__ == "__main__":
    n = int(input())
    phoi_hop(n)
