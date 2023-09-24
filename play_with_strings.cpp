#include<iostream>
using namespace std;
bool playString(char s[],char r[],int n){
	int s0=0,s1=0,r0=0,r1=0;
	for(int i=0;i<n;i++){
		if(s[i]=='0'){
			s0++;
		}
		else if(s[i]=='1'){
			s1++;
		}
		if(r[i]=='0'){
			r0++;
		}
		else if(r[i]=='1'){
			r1++;
		}
	}
	if(s0==r0&&s1==r1){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int t,n;
	cin>>t;
	char s[100];
	char r[100];
	for(int i=0;i<t;i++){
		cin>>n;
		cin>>s>>r;
		if(playString(s,r,n)){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	
	return 0;
}
