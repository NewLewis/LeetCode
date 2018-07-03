#include <iostream>

using namespace std;

class Solution {
public:
	//方法一：动态规划 
    int uniquePaths(int m, int n) {
        int num[101][101] = {0};
        for(int i=1;i<=m;i++)
        	num[i][1] = 1;
        for(int i=1;i<=n;i++)
        	num[1][i] = 1;
        for(int i=2;i<=m;i++){
        	for(int j=2;j<=n;j++){
        		num[i][j] = num[i-1][j] + num[i][j-1];
        	}
        }
        return num[m][n];
    }
};

int main(){
	
}
