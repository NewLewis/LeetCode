#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
    	vector<vector<int>> res;
    	for(int i=0;i<n;i++){
    		vector<int> vec(n);
			res.push_back(vec); 
    	}
    	
    	int k = 1;
    	int i = 0,j = n - 1;
    	while(i <= j){
    		func(res,k,i++,j--);
    	}
    	return res;
    }
    
    void func(vector<vector<int>>& m,int& k,int a,int b){
    	for(int i=a;i<=b;i++)
    		m[a][i] = k++;
    	for(int i=a+1;i<=b;i++)
    		m[i][b] = k++;
    	for(int i=b-1;i>=a;i--)
    		m[b][i] = k++;
    	for(int i=b-1;i>a;i--)
    		m[i][a] = k++;
    }
};

int main(){
	
}	
