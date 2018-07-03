#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
    	int n = triangle.size();
        vector<int> vec(n);
        vec[0] = triangle[0][0];
        for(int i=1;i<n;i++){
        	for(int j=i;j>=0;j--){
        		if(j == i)
        			vec[j] = vec[j-1] + triangle[i][j];
        		else if(j == 0)
        			vec[j] = vec[j] + triangle[i][j];
        		else 
        			vec[j] = min(vec[j-1],vec[j]) + triangle[i][j];
        	}
        }
        
        int min = 99999999;
        for(int i=0;i<n;i++){
        	if(min > vec[i])
        		min = vec[i];
        }
        
        return min;
    }
};

int main(){
	
}
