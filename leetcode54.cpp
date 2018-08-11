#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> res;
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    	if(matrix.empty())
    		return res;
    		
        int row = matrix.size()-1;
        int col = matrix[0].size()-1;

		int a1 = 0,b1 = 0;
		int a2 = row,b2 = col;
		
		while(a1 <= a2 && b1 <= b2){
			func(matrix,a1++,b1++,a2--,b2--);
		}

        return res;
    }
    
    void func(vector<vector<int>> m,int a1,int b1,int a2,int b2){
    	if(a1 == a2){
    		for(int i=b1;i<=b2;i++)
    			res.push_back(m[a1][i]);
    	}else if(b1 == b2){
    		for(int i=a1;i<=a2;i++)
    			res.push_back(m[i][b1]);
    	}else{
    		for(int i=b1;i<=b2;i++)
    			res.push_back(m[a1][i]);
	    	for(int i=a1+1;i<=a2;i++)
	    		res.push_back(m[i][b2]);
	    	for(int i=b2-1;i>=b1;i--)
	    		res.push_back(m[a2][i]);
	    	for(int i=a2-1;i>a1;i--)
	    		res.push_back(m[i][a1]);
    	}
    }
};

vector<vector<int>> create(int m,int n){
	vector<vector<int>> res;
	
	int k = 1;
	for(int i=0;i<m;i++){
		vector<int> vec;
		for(int j=0;j<n;j++)
			vec.push_back(k++);
		res.push_back(vec);
	}
	return res;
}

int main(){
	Solution A;
	vector<vector<int>> test = create(3,4);
	
	for(int i=0;i<test.size();i++){
		for(int j=0;j<test[0].size();j++){
			cout << test[i][j] << " ";
		}
		cout << endl;
	}
	
	vector<int> res = A.spiralOrder(test);
	
	for(int i=0;i<res.size();i++)
		cout << res[i] << " ";
	cout << endl;
}
