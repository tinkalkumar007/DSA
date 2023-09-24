#include <iostream>
using namespace std;
int maxFunc(int *a2,int n){
	int max=0;
	for(int i=0;i<n;i++){
		if(a2[i]>=max){
			max=a2[i];
		}
	}
	return max;
}
int minFunc(int *a2,int n){
	int min=0;
	for(int i=0;i<n;i++){
		if(a2[i]<=min){
			min=a2[i];
		}
	}
	return min;
}
void cumulativeSum(int a[][2],int n){
	for(int i=1;i<n;i++){
		a[i][0]=a[i][0]+a[i-1][0];
		a[i][1]=a[i][1]+a[i-1][1];
	}
	return;
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n][2];
	int a2[n]={0};
	for(int i=0;i<n;i++){
	    for(int j=0;j<2;j++){
	        cin>>a[i][j];
	    }
	}
	// cumulative sum;
	cumulativeSum(a,n);
	// take lead of players
	for(int i=0;i<n;i++){
	    a2[i]=(a[i][0]-a[i][1]);
	}
	int max=maxFunc(a2,n);
	int min=minFunc(a2,n);
	if(max>(-min)){
		cout<<"1 "<<max<<endl;
	}
	else{
		cout<<"2 "<<(-min)<<endl;
	}
	
	return 0;
}
