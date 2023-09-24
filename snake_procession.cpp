#include<iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	char a[500];
	char a1[500];
	int k=0;
	for(int i=0;i<t;i++){
		cin>>n;
		cin>>a;
		for(int j=0;j<n;j++){
			if(a[j]=='H'||a[j]=='T'){
				a1[k]=a[j];
				k++;
			}
		}
		if(a1[0]=='T'||a1[k-1]=='H'){
			cout<<"Invalid"<<endl;
		}
		else{
			int count=0;
			for(int m=0;m<k;m++){
				if(m%2==0&&a1[m]=='T'){
					cout<<"Invalid"<<endl;
					break;
				}
				else if(m%2==1&&a1[m]=='H'){
					cout<<"Invalid"<<endl;
					break;
				}
				count++;
			}
			if(count==k){
				cout<<"Valid"<<endl;
			}
		}
		k=0;
	}
	return 0;
}
