#include<bits/stdc++.h>
using namespace std;
stack<int> st;
void insertAtBottom(int x){
    if(st.empty()){
        st.push(x);
    }
    else{
        int val=st.top();
        st.pop();
        insertAtBottom(x);
        st.push(val);
    }
}
int main(){
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    insertAtBottom(5);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}