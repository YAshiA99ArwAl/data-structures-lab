#include <iostream>
#include<bits/stdc++.h>
#include <queue>
using namespace std;

class mystack {
    queue<int> q;
public:
    void push(int x) {
        q.push(x);
        for (int i = 0; i < (int)q.size() - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }
    void pop() {
        if (!q.empty()) {
            q.pop();
        }
    }
    int top() {
        if (q.empty()) {
            cout << "Stack is empty" << endl;
            return -1;  
        }
        return q.front();
    }
};

int main() {
    mystack st;
    st.push(10); 
    st.push(20); 
    st.push(30);
    cout << "Top element is: " << st.top() << endl;
    st.pop();
    cout << "Top element is: " << st.top() << endl;
}
