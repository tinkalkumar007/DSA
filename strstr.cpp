#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findNeedle(string in,string srch){
        int n=srch.length();
        int m=in.length();
        for(int i=0;i<m;i++){
            if(in[i]==srch[0]){
                int count=0;
                for(int j=1;j<n;j++){
                    if(in[i+j]==srch[j]){
                        count++;
                    }
                }
                if(count==n-1){
                    return i;
                }
            }
        }
        return -1;
    }
    int strStr(string haystack, string needle) {
        if(needle.length()==0) return 0;
        if(needle.length()>haystack.length()) return -1;
        else{
            int x=findNeedle(haystack,needle);
            if(x==-1){
                return -1;   
            }
            else{
                return x;
            }
        }
    }
};
int main(){
	Solution s;
	string s1,s2;
	cin>>s1>>s2;
	cout<<s.strStr(s1,s2)<<endl;
}
