#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int rob(vector<int>& nums){
        if(nums.empty())
			return 0;
        if(nums.size() == 1)
            return nums[0];
		vector<int> vec1 = nums,vec2 = nums;
		vec1.erase(vec1.begin());
		vec2.pop_back();
		return max(func(vec1),func(vec2));
	}
    int func(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int res[10000] = {0};
        res[0] = nums[0];
        res[1] = max(nums[1],res[0]);
        
        int i=2;
        for(;i<nums.size();i++){
        	res[i] = max(res[i-2] + nums[i],res[i-1]);
        }
        return res[nums.size()-1];
    }
};

int main(){
	
}
