#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> vec(rowIndex + 1);
        vec[0] = 1;
        for(int i=1;i<=rowIndex;i++){
        	for(int j=i;j>0;j--){
				vec[j] = vec[j] + vec[j-1]; 
        	}
        }
        return vec;
    }
};

int main(){
	
}
