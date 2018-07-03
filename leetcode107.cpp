#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int> > res;
        if(!root)
        	return res;
        queue<TreeNode*> que;
        que.push(root);
        
        vector<int> fir;
        fir.push_back(root->val);
        res.push_back(fir);
        
        while(!que.empty()){
        	
        	vector<int> vec;
        	queue<TreeNode*> tQue;
        	
        	while(!que.empty()){
        		tQue.push(que.front());
        		que.pop();
        	}
        	
        	while(!tQue.empty()){
        		TreeNode *tmp = tQue.front();
        		tQue.pop();
        		
        		if(tmp->left){
        			que.push(tmp->left);
        			vec.push_back(tmp->left->val);
        		}
        		if(tmp->right){
        			que.push(tmp->right);
        			vec.push_back(tmp->right->val);
        		}
        	}
        	if(!vec.empty())
        		res.push_back(vec);
        }
        vector<vector<int> > res2;
        for(int i=res.size()-1;i>=0;i--){
        	res2.push_back(res[i]);
        }
        return res2;
    }
};

int main(){
	
}
