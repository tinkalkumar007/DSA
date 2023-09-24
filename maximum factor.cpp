#include<iostream>
using namespace std;
int gcd(int a,int b){
	//base case
	if(b==0){
		return a;
	}
	// rec case
	return gcd(b,a%b);	
}
int lcm(int a, int b){
	return a*b/gcd(a,b);
	
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<endl;
	cout<<lcm(a,b)<<endl;
	return 0;
}
