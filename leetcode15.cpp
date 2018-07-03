#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(int i=0;i<nums.size();i++){
        	if(i != 0 && nums[i] == nums[i-1])
        		continue;
        	int k = i+1,t = nums.size()-1;
        	while(k < t){
        		if(nums[i] + nums[k] + nums[t] == 0){
        			vector<int> vec;
        			vec.push_back(nums[i]);
        			vec.push_back(nums[k]);
        			vec.push_back(nums[t]);
        			res.push_back(vec);
        			break;
        		}else if(nums[i] + nums[k] + nums[t] < 0){
        			k++;
        		}else{
        			t--;
        		}
        	}
        }
        return res;
    }
};

int main(){
	
}
