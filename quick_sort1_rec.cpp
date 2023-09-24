#include<iostream>
#include<algorithm>
using namespace std;
void quickSort(int a[],int s,int e){
	//base case
	if(s>=e){
		return;
	}
	int p=a[e];
	int i=s-1;
	for(int j=s;j<e;j++){
		if(a[j]<p){
			i++;
			swap(a[j],a[i]);
		}
	}
	i++;
	swap(a[e],a[i]);
	quickSort(a,s,i-1);
	quickSort(a,i+1,e);
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	quickSort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
