#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if(x==1) return 1;
        for(int i = 1 ;i<=x;i++)
        {
            long long cp = (long long)i*i;
            if(cp > x) return --i ;
        }
        return 0;
    }
    int binary_search_sqrt(int l, int r , int t)
    {
        // cout << l << " " << r << endl;
        int mid = l + (r - l) / 2;
        if (l>r)
        {
            return r ;
        }
        int mid_pow = mid * mid;
        if (mid_pow==t)
        {
            return mid;
        }else if(mid_pow > t){
            return binary_search_sqrt(l,mid-1,t);
        }else
        {
            return binary_search_sqrt(mid+1,r,t);
        }
    }
};
int main() {
    Solution sol;
    int n; 
    cin >> n;
    cout << "Binary Search approach : " << sol.binary_search_sqrt(1,n,n) << endl;
    return 0;
}