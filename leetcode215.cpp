#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    	int low = 0,high = nums.size()-1;
		
		while(low <= high){
			int i = low;
			int j = high;
			
            int pivot = nums[low];
			while(i <= j){
				while(i <= j && nums[j] < pivot)
					j--;
				while(i <= j && nums[i] >= pivot)
					i++;
				if(i < j)
					swap(nums[i],nums[j]);
			}
			swap(nums[low],nums[j]);
			
			if(j == k - 1)
				return nums[j];
			else if(j < k - 1)
				low = j + 1;
			else
				high = j - 1;
		} 
    }
};

int main(){
	
}
