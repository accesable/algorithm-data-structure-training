/*
Counting Perfect Cubes in a Range:

Problem: Given two integers l and r, count how many integers between l and r (inclusive) are perfect cubes.
Hint: Similar to the perfect square problem, but using cube roots.
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long

ll countPerfectCubes(ll l ,ll r)
{
    if(l > r) return 0;

    ll start = ceil(cbrt(l));
    ll end = floor(cbrt(r));
    // cout << start << "  " << end << "   ";
    return (end - start + 1);
}

int main()
{
    ll l,r;
    cin >> l >> r;
    cout << countPerfectCubes(l,r); 
    return 0;
}