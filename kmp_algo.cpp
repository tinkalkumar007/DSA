// kmp(knuth morris pratt) algorithm
#include<bits/stdc++.h>
using namespace std;
vector<int> kmpPre(string &t){
    int n=t.length();
    vector<int> lps(n);
    lps[0]=0;
    int len=0,i=1;
    while(i<n){
        if(t[len]==t[i]){
            len++;
            lps[i]=len;
            i++;
        }
        else{
            if(len!=0){
                len=lps[len-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
    return lps;
}
vector<int> kmp(string &s,string &t){
    vector<int> lps=kmpPre(t);
    vector<int> ans;
    int n=s.length();
    int m=t.length();
    int i=0,j=0;
    while((n-i)>=(m-j)){
        if(s[i]==t[j]){
            i++;
            j++;
            if(j==m){
                ans.push_back(i-j);
                j=lps[j-1];
            }
        }
        else if(i<n && s[i]!=t[j]){
            if(j!=0){
                j=lps[j-1];
            }
            else{
                i++;
            }
        }
    }
    return ans;
}
int main(){
    string s,t;
    cin>>s>>t;
    vector<int> ans=kmp(s,t);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}