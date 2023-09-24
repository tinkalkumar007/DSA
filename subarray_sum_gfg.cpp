#include <iostream>
using namespace std;
int fact(int n){
    //base case
    if(n==1){
        return 1;
    }
    long long int ans =n*fact(n-1);
    return ans;
}


int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n]={0};
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	for(int i=0;i<n;i++){
	    cout<<fact(a[i])<<endl;
	}
	
	
	return 0;
}
