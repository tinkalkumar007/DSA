#include<iostream>
using namespace std;
int subArraysum(int a[20],int n,int k){
	int sum=0,i=0;
	while(n>0){
		if(n&1){
			//cout<<sum<<endl;
			sum+=a[i];
		}
		n=n>>1;
		i++;
	}
	return sum;
	//cout<<sum<<endl;
	
}

int subArray(int a[20],int n,int k){
	int range=(1<<n)-1;
	int a1[range]={0};
	for(int i=0;i<=range;i++){
		a1[i]=subArraysum(a,i,k);
	}
	int m=0;
	for(int i=0;i<=range;i++){
		if(a1[i]==k){
			m+=1;
			cout<<"Yes"<<endl;
			break;
		}
	}
	(m&1)?cout<<"":cout<<"No";
		
}

int main(){
	int a[20];
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];		
	}
	// make all subarray
	subArray(a,n,k);
	
	return 0;
}
