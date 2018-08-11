#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
		if(k <= 0) return false;
        if(nums.size() == 0 || nums.size() == 1) return false;
        //如果nums[ i ]已经在map中，判断其value和i的距离是否小于等于k，是，则返回true。否，则将nums[i]对应的value修改为当前的i值
        unordered_map<int, int> cpnums;
        for(int i = 0; i < nums.size(); i ++){
            if(cpnums.find(nums[i]) == cpnums.end())
                cpnums.insert({nums[i], i});
            else{
                if(i - cpnums[ nums[i]] <= k)
                    return true;
                else
                    cpnums[nums[i]] = i;
            }
        }
        return false;

    }
};

int main(){
	
}
