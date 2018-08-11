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
	//ÖÐÐò±éÀú¡¤ 
	void helper(TreeNode* root,vector<int>&result){
        if (root == NULL)
            return;
        helper(root->left, result);
        result.push_back(root->val);
        helper(root->right, result);
    }
    
    bool isValidBST(TreeNode* root){
    	if(!root || (!root->left && !root->right))
			return true; 
    	
        vector<int>result;
        helper(root, result);
        for (int i = 0; i < result.size()-1; i++)
        {
            if (result[i]>=result[i + 1])
                return false;
        }
        return true;
    }
};

int main(){
	
}
