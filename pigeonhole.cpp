#include<iostream>
using namespace std;
void pigeonHole(int *a,int n){
	int a1[n]={0};
	int a2[n]={0};
	a1[1]=a[0];
	for(int i=1;i<n;i++){
		a1[i+1]=a[i]+a1[i];	
	}
	for(int i=0;i<=n;i++){
		a2[a1[i]%n]+=1;
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=(a2[i]*(a2[i]-1));
	}
	cout<<sum/2;
}


int main(){
	int a[20];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	pigeonHole(a,n);
	
	
	return 0;
}
