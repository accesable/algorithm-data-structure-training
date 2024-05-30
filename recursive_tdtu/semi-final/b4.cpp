#include<bits/stdc++.h>
#include<limits>
#define ll long long
using namespace std;

void type_one_query(vector<ll> &nums,ll x,ll y,ll v)
{
    for (size_t i = x-1; i < y; i++)
    {
        // dereferenced
        nums[i] += v;
    }
    
}
void type_two_query(vector<ll> &nums,ll l,ll r,vector<ll> &results)
{
    ll maxValue = LLONG_MIN;
    for (size_t i = l-1; i < r; i++)
    {
        maxValue = max(nums[i],maxValue);
    }
    
    results.push_back(maxValue);
}


int main()
{
    ll n, q;
    cin >> n >> q;

    vector<ll> nums;
    vector<ll> results;

    ll t;
    for (size_t i = 0; i < n; i++)
    {
        cin >> t;
        nums.push_back(t);
    }
    
    // Read and process each query
    for (ll i = 0; i < q; i++) {
        int query_type;
        cin >> query_type;

        if (query_type == 1) {
            ll x, y, v;
            cin >> x >> y >> v;
            type_one_query(nums, x, y, v);
        } else if (query_type == 2) {
            ll l, r;
            cin >> l >> r;
            type_two_query(nums, l, r,results);
        } else {
            cerr << "Error: Unknown query type " << query_type << endl;
            return 1;
        }
    }
    
    // vector<ll> test = {1,2,3};
    // type_one_query(test,1,3,1);
    // type_one_query(test,2,3,4);
    // type_two_query(test,1,3);
    // for (size_t i = 0; i < n; i++) {
    //     cout << test[i] << " ";
    // }
    // cout << endl;
    for (size_t i = 0; i < results.size(); i++) {
        cout << results[i] << endl;
    }
    return 0;
}