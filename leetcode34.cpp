#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = 0,j = nums.size()-1;
        
        int k=-1,min=-1,max=-1;
        while(i <= j){
        	k = (i + j) / 2;
			if(nums[k] == target){
				min = k;
			}	   
			if(nums[k] < target){
				i = k + 1;
			}else{
				j = k - 1;
			}
        }
        
    	i = 0,j = nums.size()-1;
    	while(i <= j){
        	k = (i + j) / 2;
			if(nums[k] == target){
				max = k;
			}	   
			if(nums[k] > target){
				j = k - 1;
			}else{
				i = k + 1;
			}
        }
        vector<int> res;
        res.push_back(min);
        res.push_back(max);
        return res;
    }
};

int main(){
	
} 
