#include<iostream>
#include<cstring>
using namespace std;
bool palindrome(string a){
	int n=a.length();
	for(int i=0;i<n;i++){
		if(a[i]!=a[(n-1)-i]){
			return false;
		}
	}
	return true;	
}
int main(){
	int n;
	cin>>n;
	string player[n][1];
	for(int i=0;i<n;i++){
		cin>>player[i][0];
	}
	// check for palindrome
	for(int j=0;j<n;j++){
		string score=player[j][0];
		if(palindrome(score)){
			cout<<"wins"<<endl;
		}
		else{
			cout<<"loses"<<endl;
		}
	}	
	return 0;
}
