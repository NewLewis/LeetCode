#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0,j = nums.size()-1,m;
        while(nums[i] == 0)
        	i++;
        while(nums[j] == 2)
        	j--;
        	
        m = i;
        
        while(m <= j){
        	if(nums[m] == 0){
        		if(m != i)
        			swap(nums[m],nums[i]);
        		i++,m++;
        	}else if(nums[m] == 1){
        		m++;
        	}else{
        		swap(nums[m],nums[j]);
        		j--;
        	}
        }
    }
};

int main(){
	
}
