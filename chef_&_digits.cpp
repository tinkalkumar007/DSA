#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	while(n>0){
		cin>>s;
		int a[2]={};
		if(s.length()==1) cout<<"Yes"<<endl;
		else{
		for(int i=0;i<s.length();i++){
			if(s[i]=='1'){
				a[1]++;
			}
			else{
				a[0]++;
			}
		}
		if(a[0]>=1&&a[1]==1||a[1]>=1&&a[0]==1) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	    }
		n--;
	}
	
	return 0;
}
