#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Pair{
	int x;
	int y;
	Pair():x(0),y(0){}
	Pair(int x,int y):x(x),y(y){}
};

class Solution {
public:
	int bo[100][100];
	int res;
    int numIslands(vector<vector<char>>& grid) {
    	if(grid.empty())
    		return 0;
        //init
        for(int i=0;i<10000;i++)
        	for(int j=0;j<10000;j++)
        		bo[i][j] = 0;
        		
        res = 0;
        
        for(int i=0;i<grid.size();i++){
        	for(int j=0;j<grid[0].size();j++){
        		if(bo[i][j] == 0 && grid[i][j] == '1'){
        			res++;
        			bfs(grid,i,j);
        		}
        	}
        }
        
        return res;
    }
    
    void bfs(vector<vector<char>>& grid,int x,int y){
    	queue<Pair> que;
    	Pair p(x,y);
    	bo[x][y] = 1;
    	
    	que.push(p);
    	
    	int nx,ny;
    	int nextX[2][2] = {{1,-1},{0,0}};
    	int nextY[2][2] = {{0,0},{1,-1}};
    	while(!que.empty()){
    		Pair tmp = que.front();
    		que.pop();
    		
    		for(int i=0;i<=1;i++){
    			for(int j=0;j<=1;j++){
    				nx = tmp.x + nextX[i][j];
    				ny = tmp.y + nextY[i][j];
    		
					if(nx >= grid.size() || nx < 0)
						continue;
					if(ny >= grid[0].size() || ny < 0)
						continue;
					if(bo[nx][ny] == 1 || grid[nx][ny] == '0')
						continue;
						
					
    				if(grid[nx][ny] == '1'){
    					bo[nx][ny] = 1;
    					Pair t(nx,ny);
    					que.push(t);
    				}
    			}
    		}
    	}
    }
};

vector<vector<char>> createTest(){
	string str;
	vector<vector<char>> res;
	while(cin >> str){
		vector<char> vec;
		for(int i=0;i<str.size();i++)
			vec.push_back(str[i]);
		res.push_back(vec);
	}
	
	return res;
}

int main(){
	Solution A;
	vector<vector<char>> test = createTest();
	cout << A.numIslands(test);
}
