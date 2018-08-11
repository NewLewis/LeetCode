#include <iostream>
#include <vector> 

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i = 0,j = matrix.size()-1;
        while(i <= j){
        	rotateRow(matrix,i++,j--);
        }
    }
    
    void rotateRow(vector<vector<int>>& m,int a,int b) {
    	vector<int> tmp;
    	for(int i=a;i<b;i++){
    		tmp.push_back(m[a][i]);
    	}
    	
    	for(int i=a,j=b;i<b;i++,j--)
    		m[a][i] = m[j][a];
    		
    	for(int i=a,j=b;i<b;i++,j--)
    		m[j][a] = m[b][j];
    	
    	for(int i=a,j=b;i<b;i++,j--)
    		m[b][j] = m[i][b];
    	
    	for(int i=a,k=0;i<b;i++,k++)
    		m[i][b] = tmp[k];
    }
};

int main(){
	
}
