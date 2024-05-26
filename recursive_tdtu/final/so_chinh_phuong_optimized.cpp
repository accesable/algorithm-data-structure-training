#include<bits/stdc++.h>

#define ll long long
using namespace std;

ll countPerfectSquare(ll l ,ll r)
{
    if (l > r)
    {
        return 0;
    }
    ll start = ceil(sqrt(l));
    ll end = floor(sqrt(r));  
    // cout << start << " " << end;
    return (end - start + 1) ;
    
}
int main()
{
    ll l , r;
    l = 50261116833773412; 
    r = 813971909654550723;
    // cin >> l >> r;

    cout << countPerfectSquare(l,r) << "\n";
    return 0;

}