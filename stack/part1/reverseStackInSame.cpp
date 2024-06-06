#include<iostream>
#include<stack>
using namespace std;
void displayStack(stack<int>& st){
    stack<int> temp;
    while(st.size()>0){
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    // putting values temp to st
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        int x = temp.top();
        temp.pop();
        st.push(x);
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    displayStack(st);
    cout<<endl;
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    stack<int> temp1;
    while(temp.size()>0){
        temp1.push(temp.top());
        temp.pop();
    }
    while(temp1.size()>0){
        st.push(temp1.top());
        temp1.pop();
    }
    displayStack(st);
}