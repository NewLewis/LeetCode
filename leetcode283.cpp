#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0,t = 0;
        while(t < nums.size()){
        	if(nums[t] != 0){
        		nums[k++] = nums[t]; 
        	}
        	t++;
        }
        while(k < nums.size()){
        	nums[k++] = 0;
        }
    }
};

int main(){
	
} 
