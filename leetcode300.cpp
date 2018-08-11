#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
    	if(nums.empty())
    		return 0;
    	
        int dp[10000] = {0};
        int Max = INT_MIN;
        for(int i=0;i<nums.size();i++){
        	dp[i] = 1;
        	for(int j=0;j<i;j++){
        		if(nums[j] < nums[i]){
        			dp[i] = max(dp[j] + 1,dp[i]);

        		}
        	}
        	Max = dp[i] > Max ? dp[i] : Max;
        }
        return Max;
    }
};

int main(){
	
}
