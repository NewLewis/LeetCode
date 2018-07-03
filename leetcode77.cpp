#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
    	if(n < k){
    		k = n;
    	}
    	if(k == n){
    		vector<vector<int> > res;
			vector<int> vec;
			for(int i=1;i<=n;i++){	
				vec.push_back(i);
			}
			res.push_back(vec);
			return res; 
    	}
    	if(k == 1){
    		vector<vector<int> > res;
			for(int i=1;i<=n;i++){
				vector<int> vec;
				vec.push_back(i);
				res.push_back(vec);
			}
			return res; 
    	}
        return merge(combine(n-1,k),insert(combine(n-1,k-1),n));
    }
    
	vector<vector<int> > merge(vector<vector<int> > vec1,
		vector<vector<int> > vec2){
		for(int i=0;i<vec2.size();i++){
			vec1.push_back(vec2[i]);
		}
		return vec1;
	}
	
	vector<vector<int> > insert(vector<vector<int> > vec,int n){
		for(int i=0;i<vec.size();i++){
			vec[i].push_back(n);
		}
		return vec;
	}
}; 

int main(){
	
}
