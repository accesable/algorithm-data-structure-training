#include<bits/stdc++.h>

#define ll long long
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(std::vector<int>& nums) {
    	int l = 0 , r = nums.size() - 1;
	vector<int> v;
	while(l <= r){
		if(abs(nums[l]) > abs(nums[r])){
			v.push_back(nums[l]*nums[l]);
			l++;	
		}else{
			v.push_back(nums[r]*nums[r]);
			r--;
		}	
	}
	reverse(v.begin(),v.end());
	return v;
    }
};
int main() {
    Solution sol;
    std::vector<int> nums = {-4, -1, 0, 3, 10};
    std::vector<int> result = sol.sortedSquares(nums);

    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}
