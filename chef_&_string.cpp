#include<bits/stdc++.h>
using namespace std;
bool func(string s){
	int digit1=s[0]-'0';
	int digit2=s[1]-'0';
	for(int i=2;i<s.length();i+=2){
		if(s[i]-'0'!=digit1||s[i+1]-'0'!=digit2){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	set<int> v;
	string s;
	while(n>0){
		cin>>s;
		if(s.length()==1||s.length()==2) cout<<"YES"<<endl;
		else {
			if(s.length()%2==0){
				if(func(s)) cout<<"YES"<<endl;
				else cout<<"NO"<<endl;
			}
			else{
				for(int i=0;i<s.length();i++){
					int digit=s[i]-'0';
					v.insert(digit);
				}
				if(v.size()==1) cout<<"YES"<<endl;
				else cout<<"NO"<<endl;
				v.clear();
			}	
		}
		n--;
    }
	return 0;
}
