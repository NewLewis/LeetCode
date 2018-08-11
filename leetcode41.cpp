#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int l = 0,r = nums.size()-1;
        
        while(l <= r){
        	if(nums[l] == l + 1){
        		l++;
        	}else if(nums[l] <= l || nums[l] > r || nums[nums[l]-1] == nums[l]){
        		nums[l] = nums[r--];
        	}else{
        		int tmp = nums[l];
        		nums[l] = nums[tmp-1];
				nums[tmp-1] = tmp;
        	} 
        }
        
        return l + 1;
    }
};

int main(){
	
}
