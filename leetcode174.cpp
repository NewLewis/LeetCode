#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int res;
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        if(dungeon.empty())
        	return 0;
    	res = 99999999;
    }
    
    void dfs(vector<vector<int>>& dungeon,int a,int b,int min,int sum){
    	if(a == dungeon.size()-1 && b == dungeon[0].size()-1){
    		int k;
    		
    		if(min > 0){
    			k = 1;
    		}else {
    			if(sum > 0){
    				k = -min + 1;
    			}else{
    				k = max(-min,-sum) + 1;
    			}
    		}
    		
    		if(k < res)
    			res = k;
    	}
    	
    	int m = dungeon.size();
    	int n = dungeon[0].size();
    	
    	int nextMin,nextSum;
    	if(a == 0 && b == 0){
    		nextMin = dungeon[a][b];
    	}else{
    		if(dungeon[a][b] < 0)
    			nextMin = min + dungeon[a][b];
    	}
		nextSum = sum + dungeon[a][b];
		
		if(a+1 < n)
			dfs(dungeon,a+1,b,nextMin,nextSum);
		if(b+1 < m)
			dfs(dungeon,a,b+1,nextMin,nextSum);
    }
};

int main(){
	
}
