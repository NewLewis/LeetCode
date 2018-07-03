#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     //   sort(nums.begin(),nums.end());
        int k = nums.size();
        vector<int> res;
        bool bo = false;
        for (int i=0;i<k;i++)
        {
        	for (int j=i+1;j<k;j++)
        	{
        		if(nums[i] + nums[j] == target)
				{
					res.push_back(i);
					res.push_back(j);
					bo = true;
        		}
        	}
        	if(bo == true)
        		break;
        }
        return res;
    }
};

int main()
{
	vector<int> vec;
	vec.push_back(2);
	vec.push_back(7);
	vec.push_back(11);
	vec.push_back(15);
	
	Solution solution;
	vector<int> res = solution.twoSum(vec,18);
	
	cout << res[0] << " " << res[1] << endl;
	
	return 0;
}
