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
void pushAtBottom(stack<int>& st, int val){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val); // pushing at bottom
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
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
    // here we copy in temp1
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(60); // pushing at bottom
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    displayStack(st);
    pushAtBottom(st,70);
    cout<<endl;
    displayStack(st);
}