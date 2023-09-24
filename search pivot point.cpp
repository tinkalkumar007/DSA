#include<iostream>
using namespace std;
int pivotPt(int a[],int s,int e){
	int mid=(s+e)/2;
	if(a[mid]>a[mid+1]){
		return mid;
	}
	if(a[mid]<a[mid-1]){
		return mid-1;
	}
	if(a[s]>=a[mid]){
		return pivotPt(a,s,mid-1);
	}
	if(a[mid]>=a[e]){
		return pivotPt(a,mid+1,e);
	}
}

int main(){
	int a[]={7,1,2,3,4,5,6};
	// search for pivot point
	cout<<"Pivot is at index: "<<pivotPt(a,0,6)<<endl;
	return 0;
}
