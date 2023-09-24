#include<iostream>
using namespace std;
int main(){
	int n,c;
	int left=0;
	int right=0;
	int a[]={0};
	int larr[]={0};
	int rarr[]={0};
	cin>>n;
	c=n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//cout<<c<<endl;
	for(int i=1;i<c;i++){
		//cout<<left<<",";
		if(left<a[i]){
			left=a[i];
			larr[i]=left;
			cout<<left<<",";
    	}
    	else{
    		larr[i]=left;
    		cout<<left<<",";
		}
			
		
	}
/*	for(int i=0;i<n;i++){
		cout<<larr[i]<<",";
    }*/
    return 0;
}
