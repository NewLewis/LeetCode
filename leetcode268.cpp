#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int l = 0,r = nums.size()-1;
        
        while(l <= r){
			if(nums[l] == l){
        		l++;
        	}else if(nums[l] < l || nums[l] > r || nums[nums[l]] == nums[l]){
        		nums[l] = nums[r--];
        	}else{
        		int tmp = nums[l];
        		nums[l] = nums[tmp];
				nums[tmp] = tmp;
        	}
        }
        return l;
    }
};

int main(){
	
} 
