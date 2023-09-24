#include<iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		int a[n];
		int m=n;
		for(int j=0;j<m;j++){
			cin>>a[j];
			if(j>0){
				for(int k=j-1;k>=0;k--){
					if(a[k]==a[j]&&a[k]!=0){
						a[j]=0;
						n--;
					}
				}
			}
		}
		cout<<n<<endl;	
	}
	return 0;
}
