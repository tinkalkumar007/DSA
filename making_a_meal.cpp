#include<iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	string s;
	while(t--){
		cin>>n;
		int a[15]={};
		for(int i=0;i<n;i++){
			cin>>s;		
			for(int j=0;j<s.length();j++){
				int digit=s[j]-'a';
				if(digit<15) a[digit]++;	
			}	
		}
		int c=a[2]/2;
		int e=a[4]/2;
		int d=a[3],f=a[5],h=a[7],o=a[14];
		int ans=min(c,min(e,min(d,min(f,min(h,o)))));
		cout<<ans<<endl;	
	}
	return 0;
}
