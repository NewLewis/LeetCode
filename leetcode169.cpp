#include <iostream>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cand = -1;
        int times = 0;
        for(int i=0;i<nums.size();i++){
        	if(times == 0){
        		cand = nums[i];
        		times++;
        	}else if(nums[i] == cand){
        		times++;
        	}else{
        		times--;
        	}
        	if(times == 0){
        		cand = -1;
        	}
        }
        return cand;
    }
};

int main(){
	
}
