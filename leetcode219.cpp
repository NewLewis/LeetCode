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
        //���nums[ i ]�Ѿ���map�У��ж���value��i�ľ����Ƿ�С�ڵ���k���ǣ��򷵻�true������nums[i]��Ӧ��value�޸�Ϊ��ǰ��iֵ
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
