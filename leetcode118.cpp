#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > res;
        
        if(numRows == 0)
        	return res;
        
        vector<int> vec1,vec2;
        vec1.push_back(1);
        res.push_back(vec1);
        
        if(numRows == 1)
        	return res;
        
        vec2.push_back(1);
        vec2.push_back(1);
        res.push_back(vec2);
        
        if(numRows == 2)
        	return res;
        
        for(int i = 3;i<=numRows;i++){
        	vector<int> vec = res.back();
        	vector<int> tmp;
        	
        	tmp.push_back(1);
        	for(int j=0;j+1<vec.size();j++){
        		tmp.push_back(vec[j] + vec[j+1]);
        	}
        	tmp.push_back(1);
        	
        	res.push_back(tmp);
        }
        
        return res;
    }
};

int main(){
	
}
