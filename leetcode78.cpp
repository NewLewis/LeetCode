#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int length=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int> > result;
        for(int i=0;i<1<<length;i++)
        {
            vector<int> tmp;
            //计算i中有那几位为1
            for(int j=0;j<length;j++)
            {
                //判断i中第j位是否为1
                if(i&1<<j)
                {
                    tmp.push_back(nums[j]);
                }
            }
            result.push_back(tmp);
        }
        return result;
    }
};

int main(){
	
}
