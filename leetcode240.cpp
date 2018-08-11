#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    	
    	if(matrix.empty()){
    		return false;
    	}
    	
        int row = matrix.size();
        int col = matrix[0].size();
        
        int i = 0,j = col - 1;
        while(i < row && j >= 0){
        	if(matrix[i][j] == target){
        		return true;
        	}else if(matrix[i][j] > target){
        		j--;
        	}else{
        		i++;
        	}
        }
        
        return false;
    }
};

int main(){
	
}
