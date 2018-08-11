#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
	vector<vector<int>> res;
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> vec;
        dfs(root,0,vec,sum);
        return res;
    }
    
    void dfs(TreeNode* root,int sum,vector<int> vec,int target){
    	if(!root)
    		return;
    	if(!root->left && !root->right){
    		if(sum + root->val == target){
    			vec.push_back(root->val);
    			res.push_back(vec);
    		}
    		return;
    	}
    	
    	vec.push_back(root->val);
    	
    	if(root->left)
    		dfs(root->left,sum + root->val,vec,target);
    	if(root->right)
    		dfs(root->right,sum + root->val,vec,target);
    		
    	vec.pop_back();
    }
};

int main(){
	
}
