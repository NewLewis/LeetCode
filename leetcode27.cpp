#include <iostream>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty())
        	return 0;
        
        int k = 0,t = 0;
        while(t < nums.size()){
        	if(nums[t] == val)
        		t++;
        	else{
        		nums[k++] = nums[t++];
        	}
        }
        return k;
    }
};

int main(){
	
}
