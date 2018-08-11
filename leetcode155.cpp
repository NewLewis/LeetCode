#include <iostream>
#include <stack>

using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
    }
    
    void push(int x) {
        st.push(x);
        if(min.empty() || x <= min.top())
        	min.push(x);
    }
    
    void pop() {
    	int tmp = st.top();
        st.pop();
        if(tmp == min.top())
        	min.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min.top();
    }
private:
	stack<int> st;
	stack<int> min;
};

int main(){
	MinStack st;
	st.push(0);
	st.push(1);
	st.push(0);
	
	cout << st.getMin() << endl;
	st.pop();
//	cout << st.top() << endl;
	cout << st.getMin() << endl;
	
	return 0;
} 
