#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy1 = numeric_limits<int>::min(),sell1 = 0;
        int buy2 = numeric_limits<int>::min(),sell2 = 0;
        
        for(int i=0;i<prices.size();i++){
        	sell2 = max(sell2,buy2 + prices[i]);
        	buy2 = max(buy2,sell1 - prices[i]);
        	sell1 = max(sell1,buy1 + prices[i]);
        	buy1 = max(buy1,-prices[i]);
        }
        
        return sell2;
    }
};

int main(){
	
}
