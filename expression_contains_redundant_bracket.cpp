#include<bits/stdc++.h>
using namespace std;
bool isRedundant(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('||s[i]=='+'||s[i]=='*'||s[i]=='/'||s[i]=='-'){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.top()=='(') return  false;
            while(st.top()!='('){
                st.pop();
            }
            st.pop();
        }
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    cout<<isRedundant(s)<<endl;
    return 0;
}