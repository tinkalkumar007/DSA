#include<iostream>
#include<math.h>
using namespace std;
void uniqueNo(int a[20],int n){
	int a1[32]={0};
	int m;
	for(int i=0;i<n;i++){
		int j=0;
		m=a[i];
		while(m>0){
			a1[j]+=(m&1);
			m=m>>1;
			j+=1;
		}	
	}
	int no=0;
	for(int i=0;i<n;i++){
		a1[i]=a1[i]%3;
		no=no+(a1[i]*pow(2,i));
	}
	cout<<no;
}

int main(){
	int a[20];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	uniqueNo(a,n);
	
	return 0;
}
