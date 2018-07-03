#include <iostream>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
    	if(prices.empty())
    		return 0;
        int min = prices[0],max = prices[0];
        int res = 0;
        for(int i=1;i<prices.size();i++){
        	if(prices[i] < min){
        		res = max - min > res ? max - min : res;
        		max = prices[i];
        		min = max;
        	}else if(prices[i] > max){
        		max = prices[i];
        		res = max - min > res ? max - min : res;
        	}
        }
        return res;
    }
};

int main(){
	
}
