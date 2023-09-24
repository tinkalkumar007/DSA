#include<iostream>
#include<cmath>
using namespace std;
bool Isprime(int no){
	// base case
	if(no==1){
		return false;
	}
	for(int i=2;i<no;i++){
		if(no%i==0){
			return false;
		}
		return true;	
	}	
}

int main(){
	int n;
	cin>>n;
	int ans=sqrt(n);
	if(Isprime(ans)){
		cout<<n<<" is a prime no."<<endl;
	}
	else{
		cout<<n<<" is not Prime!"<<endl;
	}
	//cout<<n<<" is not prime!"<<endl;
	
	
}
