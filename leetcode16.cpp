#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    	sort(nums.begin(),nums.end());
    	
    	int res = -((1 << 31) + 1);
        for(int i=0;i<nums.size();i++){
        	int start = i+1,end = nums.size()-1;
        	while(start < end){
        		if(abs(nums[start] + nums[end] + nums[i] - target) < abs(res-target)){
        			res = nums[start] + nums[end] + nums[i];
        		}
        		if(nums[start] + nums[end] + nums[i] < target){
        			start++;
        		}else if(nums[start] + nums[end] + nums[i] > target){
        			end--;
        		}else{
        			break;
        		}
        	}
        }
        
        return res;
    }
};

int main(){
	
}
