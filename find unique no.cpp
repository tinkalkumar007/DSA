#include<iostream>
using namespace std;
int funcXor(int a[20],int n){
	int m=0;
	for(int i=0;i<n;i++){
		m=m^a[i];
	}
	return m;
}
int findUnique(int a[20],int n){
	int un;
	int ans=funcXor(a,n);
	un=ans;
	int j=-1;
	while(ans>0){
		j+=1;
		if(ans&1){
			break;
		}
		else{
			ans=ans>>1;
		}	
	}
	int a1[10];
	int k=0;
	for(int i=0;i<n;i++){
		if((a[i]>>j)&1){
			k=k^a[i];
		}	
	}
	
	cout<<k<<endl;
	cout<<(k^un)<<endl;
}


int main(){
	int a[20],n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];	
	}
	findUnique(a,n);
	
	return 0;
}
