#include<bits/stdc++.h>


#define ll long long
using namespace std;

int main()
{
    ll n ;
    cin >> n;
    ll arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    
    return 0;
}