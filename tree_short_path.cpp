#include<bits/stdc++.h>
using namespace std;
bool solution(string s,int n){
    for(int i=0;i<n;i++){
        if(s[i]!=s[n-i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    int n=s.length();
    cout<<solution(s,n)<<endl;
    return 0;
}
