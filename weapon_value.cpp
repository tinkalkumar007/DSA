#include <iostream>
#include<cstring>
using namespace std;

int main() {
	// your code goes here
	int T,N;	
	cin>>T;
	int a[10]={0};
	int a1[T]={0};
	for(int i=0;i<T;i++){
	    cin>>N;
	    string s[N];
	    for(int j=0;j<N;j++){
	        cin>>s[j];
	        string s1=s[j];
     	    for(int k=0;k<10;k++){
    	    	int digit=s1[k]-'0';
    	    	a[k]=a[k]^digit;
    		}
	    }
		int sum=0;
		for(int x=0;x<10;x++){
			sum=sum+a[x];
		}
		a1[i]=sum;
	}
	for(int i=0;i<T;i++){
	    cout<<a1[i]<<endl;
	}
	return 0;
}

