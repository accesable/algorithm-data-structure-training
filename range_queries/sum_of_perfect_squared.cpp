#include<bits/stdc++.h>

using namespace std;
#define ll long long


ll solve(ll l,ll r)
{
    if (l > r)
    {
        return 0;
    }
    
    ll start = ceil(sqrt(l));
    ll end = floor(sqrt(r));
    ll sum = 0;
    for (size_t i = start; i < end + 1; i++)
    {
        sum+=i*i;
    }
    cout << "\n";
    return sum;
}

int main()
{
    ll l,r;
    cin >> l >> r;
    cout << solve(l,r) << endl;
    return 0;
}