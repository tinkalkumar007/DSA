#include<iostream>
using namespace std;
bool split(string s,int n){
	int len=n;
	for(int i=0;i<len-1;i++){
		if(s[i]==s[len-1]){
			return true;
		}
	}
	return false;
}
int main(){
	int t,n;
	cin>>t;
	string s;
	while(t--){
		cin>>n;
		cin>>s;
		if(split(s,n)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
