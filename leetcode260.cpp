#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++){
        	ans ^= nums[i];
        }
        
        int k;
        for(int i=0;i<32;i++){
        	if((ans >> i) & 1){
        		k = i;
        		break;
        	}
        }
        
        int one = 0,two;
        for(int i=0;i<nums.size();i++){
        	if((nums[i] >> k) & 1){
        		one ^= nums[i];
        	}
        }
        
        two = one ^ ans;
        
        vector<int> res;
        res.push_back(one);
        res.push_back(two);
        
        return res;
    }
};

int main(){
	
}
