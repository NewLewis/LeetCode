#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

class Solution {
public:
	vector<vector<int>> res;
	
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end(),greater<int>());
        vector<int> vec;
        dfs(candidates,vec,0,target,0);
        return res;
    }
    
    void dfs(vector<int> candidates,vector<int> vec,int sum,int target,int k){
    	if(sum == target){
    		res.push_back(vec);
    		return;
    	}else if(sum > target){
    		return;
    	}
    	
//    	cout << "sum: " << sum << endl;
    	
    	for(int i=k;i<candidates.size();i++){
    		vec.push_back(candidates[i]);
    		dfs(candidates,vec,sum+candidates[i],target,i+1);
    		vec.pop_back();
    	}
    }
};

int main(){
	Solution A;
	vector<int> vec;
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(6);
	vec.push_back(7);
	A.combinationSum(vec,8);
} 
