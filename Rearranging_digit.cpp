#include<iostream>
#include<cstring>
using namespace std;
int checkforNum(string s,int num){
	for(int i=0;i<num;i++){
		int digit=s[i]-'0';
		if(digit==5||digit==0){
			return 1;
		}
	}
	return 0;
}
int main(){
	int n,m;
	cin>>n;
	int a2[n]={0};
	for(int i=0;i<n;i++){
		cin>>m;
		string a[n][m];
		cin>>a[i][0];
		string s=a[i][0];
		a2[i]=checkforNum(s,m);
	}
	for(int i=0;i<n;i++){
		if(a2[i]==1){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
