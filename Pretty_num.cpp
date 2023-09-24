#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][2];
	int a2[n]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			cin>>a[i][j];
		}
		int ans=0;
		for(int l=a[i][0];l<=a[i][1];l++){
			if(l%10==2||(l%10==3||l%10==9)){
				ans++;
			}	
		}
		a2[i]=ans;
	}
	for(int i=0;i<n;i++){
		cout<<a2[i]<<endl;
    }
	return 0;
}
