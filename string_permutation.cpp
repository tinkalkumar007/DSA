#include <bits/stdc++.h>
using namespace std;
bool subString(string s1,string s2){
    int n=0;
    for(int i=0;i<s2.length();i++){
        for(int j=n;j<s1.length();j++){
            if(s2[i]==s1[j]){
                n=j+1;
                break;
            }
            if(s1[j]>s2[i]){
                return false;
            }
            if(j==s1.length()-1){
                return false;
            }
        }
    }
    return true;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string A,B;
	    cin>>A>>B;
	    string s=A+B;
	    string s2;
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++){
	        string x;
	        cin>>x;
	        s2+=x;
	    }
	    sort(s.begin(),s.end());
	    sort(s2.begin(),s2.end());
	    if(subString(s,s2)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}

