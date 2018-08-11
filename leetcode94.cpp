#include <iostream>
#include <vector>
#include <stack> 

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	vector<int> res;
	//µ›πÈÀ„∑® 
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root)
        	return res;
        if(root->left)
        	inorderTraversal(root->left);
        	
        res.push_back(root->val);
        
        if(root->right)
        	inorderTraversal(root->right);
        	
        return res;
    }
    //∑«µ›πÈÀ„∑®
	vector<int> inorderTraversal2(TreeNode* root) {
		
	}
};

int main(){
	
} 
