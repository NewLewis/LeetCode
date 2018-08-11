#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
    	
    	if(nums.size() == 1){
    		return  nums[0];
    	}
    	
    	int n = nums.size();
        if(nums[0] > nums[1])
        	return 0;
        if(nums[n-1] > nums[n-2])
        	return n-1;
        
        int i = 0,j = n - 1,mid;
        while(i < j){
        	mid = i + (j - i)/ 2;
        	if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1])
        		return mid;
        	else if(nums[mid] < nums[mid + 1])
        		i = mid;
        	else if(nums[mid] < nums[mid - 1])
        		j = mid;
        }
    }
};

int main(){
	
}
