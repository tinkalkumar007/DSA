#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string s1;
	cin>>s1;
	int l1=s1.length();
	cout<<l1<<endl;
	for(int i=0;i<l1;i++){
		for(int j=0;j<=l1;j++){
			
			for(int k=i;k<j;k++){
				cout<<s1[k]<<",";
				
			}
			cout<<endl;
			
		}
		
	}
		
	return 0;
}
