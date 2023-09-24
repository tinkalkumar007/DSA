#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool compare(string s1,string s2){
	if(s1.length()<s2.length()){
		return true;
	}
}
int main(){
	char a[10][100];
	cout<<"Enter names: "<<endl;
	/*for(int i=0;i<4;i++){
		cin>>a[i];
	}
	// print strings
	for(int i=0;i<4;i++){
		cout<<a[i][0]<<endl;
	}*/
	string s[4] ={"Ramesh","Sure","Yog","Mohit"};
	sort(s,s+4,compare);
	int n;
	n=sizeof(s)/sizeof(int);
	for(int i=0;i<n;i++){
		cout<<s[i]<<" ";
	}
	
	
	
	return 0;	
}
