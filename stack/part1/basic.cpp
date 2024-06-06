#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.pop();
    cout<<st.size()<<endl;

    // printing in reverse order -->  emptying stack

    /*while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }*/

    // printing by using extra stack
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    // putting values temp to st
    while(temp.size()>0){
        int x = temp.top();
        temp.pop();
        st.push(x);
    }
    cout<<endl<<st.size()<<endl;

    // printing in normal order

    stack<int> temp1;
    while(st.size()>0){
        int x = st.top();
        st.pop();
        temp1.push(x);
    }
    // putting values temp to st
    while(temp1.size()>0){
        cout<<temp1.top()<<" ";
        int x = temp1.top();
        temp1.pop();
        st.push(x);
    }

}