#include <iostream>
using namespace std;

const long long MOD = 1000000007LL;

int f(int a, int b);
long long phoi_hop(int n);
int gcd(int a, int b);
int sum_of_divisors(int num);

int main() {
    int n;
    cin >> n;
    cout << phoi_hop(n) << endl;
    return 0;
}

long long phoi_hop(int n) {
    long long tong = 0;
    for (int i = 1; i < n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            tong = (tong + f(i, j)) % MOD;
        }
    }
    return tong;
}

int f(int a, int b) {
    int gcd_ab = gcd(a, b);
    return sum_of_divisors(gcd_ab);
}

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int sum_of_divisors(int num) {
    int tong = 0;
    for (int i = 1; i * i <= num; ++i) {
        if (num % i == 0) {
            tong += i;
            if (i != num / i) {
                tong += num / i;
            }
        }
    }
    return tong;
}
