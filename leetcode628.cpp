#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        int res = nums[n-1] * nums[n-2] * nums[n-3];
        res = max(res,nums[n-1] * nums[n-2] * nums[0]);
        res = max(res,nums[n-1] * nums[0] * nums[1]);
        res = max(res,nums[0] * nums[1] * nums[2]);
        
        return res;
    }
};

int main(){
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(6);
	Solution A;
	cout << A.maximumProduct(vec);
}
