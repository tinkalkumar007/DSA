#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[10]={6,2,5,5,4,5,6,3,7,6};
	int a2[n]={0};
	for(int i=0;i<n;i++){
		int A=0,B=0;
		cin>>A>>B;
		a2[i]=(A+B);
	}
	for(int i=0;i<n;i++){
		int ans=0;
		while((a2[i]/10)>0){			
			ans=ans+a[a2[i]%10];
			a2[i]=(a2[i]/10);
		}
		cout<<ans+a[a2[i]%10]<<endl;
	}
	return 0;
}
