#include<bits/stdc++.h>

#define ll long long
using namespace std;
bool isPerfectSquare(ll n)
{
	double root = sqrt(n);

	return root == (int)root;
}
// Binary Search Approach
ll binary_search(ll l,ll r,ll t)
{
	if(l>r) return -1;
	ll mid = l + (r-l)/2;
	if(pow(mid,2)==t)
	{
		return mid;
	}else if(pow(mid,2)>t){
		return binary_search(l,mid-1,t);
	}else{
		return binary_search(mid+1,r,t);
	}
	
}
// Normal Approach
bool isPerfectSquare(int num) {
    if (num < 0) {
        return false; // Negative numbers cannot be perfect squares
    }

    double root = std::sqrt(num);
    int intRoot = static_cast<int>(root);

    // Check if the square of the integer root is equal to the original number
    return (intRoot * intRoot == num);
}
int main()
{
	ll n;
	cin >> n;
	cout << "Is "<< n <<" Perfect Square (using binaray search) " << binary_search(0,n/2,n) << endl;
	cout << "Is "<< n <<" Perfect Square  " << isPerfectSquare(n) << endl;
	return 0;
}
