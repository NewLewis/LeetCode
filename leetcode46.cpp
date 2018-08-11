#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
	//使用排列函数next_permutation() 
    vector<vector<int>> permute(vector<int>& nums) {
    	sort(nums.begin(),nums.end());
    	vector<vector<int> > res;
        do{
        	vector<int> vec(nums);
        	res.push_back(vec);
        }while(next_permutation(nums.begin(),nums.end()));
        
        return res;
    }
    
    //dfs方法
    vector<vector<int> > res;
    bool bo[10000];
	vector<vector<int>> permute2(vector<int>& nums) {
		vector<int> vec;
		for(int i=0;i<10000;i++)
			bo[i] = false;
		dfs(nums,vec,0);
		return res;
	}
	
	void dfs(vector<int>& nums,vector<int> vec,int k){
		if(k == nums.size()){
			res.push_back(vec);
			return ;
		}
		
		for(int i=0;i<nums.size();i++){
			if(bo[i] == false){
				vec.push_back(nums[i]);
				bo[i] = true;
				dfs(nums,vec,k+1);
				vec.pop_back();
				bo[i] = false;
			}
		}
	}
};

int main(){
	
}
