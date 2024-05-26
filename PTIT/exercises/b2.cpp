#include<iostream>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    bool isEven = true;
    bool isPositive = true;
    string p1 = "chan";
    string p2 = "duong";
    if (n%2!=0)
    {
        p1 = "le";
    }
    if (n < 0)
    {
        p2 = "duong";
    }
    cout << n << " la so " << p1 <<" "<<p2;

    return 0;
}