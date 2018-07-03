#include <iostream>
#include <vector>

using namespace std;

//方法一 
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
  		k = k % nums.size();
  		
  		if(k < nums.size()/2){
  			while(k--)
  				rightMove(nums);
  		}else{
  			k = nums.size() - k;
  			while(k--)
  				leftMove(nums);
  		}
    }
    
    void leftMove(vector<int>& nums){
    	int tmp = nums[0];
    	for(int i=0;i<nums.size()-1;i++){
    		nums[i] = nums[i+1];
    	}
    	nums.back() = tmp;
    }
    
    void rightMove(vector<int>& nums){
    	int tmp = nums.back();
    	for(int i=nums.size()-1;i>0;i--){
    		nums[i] = nums[i-1];
    	}
    	nums[0] = tmp;
    }
};

//方法二，三步旋转法 
class Solution2{
public:
	void rotate(vector<int>& nums, int k) {
		k %= nums.size();
		
		int n = nums.size();
		reverse(nums,0,n-1);
		reverse(nums,0,k-1);
		reverse(nums,k,n-1);
	}
	
	void reverse(vector<int>& nums,int i,int j){
		int tmp;
		while(i<j){
			tmp = nums[i];
			nums[i++] = nums[j];
			nums[j--] = tmp;
		}
	} 
};



int main(){
	
} 
