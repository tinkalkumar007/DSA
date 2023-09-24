#include<iostream>
using namespace std;
int main(){
	int a[10];
	cout<<"Enter size of array: ";
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	int i=0;
	while(i<n-1){
		int k=0,l=0,min=0,j=0;
		min=a[i];
		//cout<<min<<" ";
		for(int j=i+1;j<n;j++){
			if(min>a[j]){
				min=a[j];
				k=j;
			}
		}
		//cout<<min<<" "<<endl;
		if(k!=0){
		l=a[i];
		a[i]=min;
		//cout<<a[0]<<" "<<endl;
		a[k]=l;
	    }
		//cout<<a[i]<<" "<<endl;
		i++;
	}
	//cout<<a[0]<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	
	
	return 0;
}
