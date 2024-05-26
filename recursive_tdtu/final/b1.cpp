#include<bits/stdc++.h>

#define ll long long
using namespace std;


bool isPerfectSquare(int num)
{
    double root = sqrt(num);
    return root == floor(root);
}
int solve(ll l,ll r)
{
    int count = 0;
    while (l < r)
    {
        if (isPerfectSquare(l++))
        {
            // cout << "l " << l << " ";
            count ++;
        }
        if (isPerfectSquare(r--))
        {
            // cout << "r " << r << " ";
            count++;    
        }
        
    }
    if (isPerfectSquare(l))
    {
        count++;
    }
    
    
    return count;
    
}
int main()
{
    ll l,r;
    // cin >> l >> r;
    l = 50261116833773412 ; r = 813971909654550723 ;
    cout << solve(l,r);
    return 0;
}


// bool isPerfectSquare(int num) {
//     if (num < 0) {
//         return false; // Negative numbers cannot be perfect squares
//     }

//     double root = std::sqrt(num);
//     int intRoot = static_cast<int>(root);

//     // Check if the square of the integer root is equal to the original number
//     return (intRoot * intRoot == num);
// }