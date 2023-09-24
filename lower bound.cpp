#include<iostream>
using namespace std;
int lowerBound(int a[10],int n,int key){
	int s=0,e=n-1,ans=-1;
	
	while(s<=e){
		int mid=(s+e)/2;
		if(a[mid]==key){
			ans=mid;
			e=mid-1;
		}
		else if(a[mid]>key){
			e=mid-1;	
		}
		else{
			s=mid+1;
		}
		
	}
	return ans;
	
}
int main(){
	int a[10],n,key;
	cout<<"Enter the no of element: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];			
	}
	//Enter key
	cout<<"Enter key: "<<endl;
	cin>>key;
	// print lower bound
	int ans=lowerBound(a,n,key);
	cout<<"Key first occurs at: "<<ans<<endl;
	
	
	return 0;
}
