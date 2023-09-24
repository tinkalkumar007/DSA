#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int T;	
	cin>>T;
	int a1[T]={0};
	for(int i=0;i<T;i++){
	    int N,K;
	    long long int V;
	    cin>>N>>K>>V;
	    long long int temp=(N+K)*V;
	    int a[N]={0};
	    for(int j=0;j<N;j++){
	        cin>>a[j];
	        temp=temp-a[j];
	    }
	    if(temp%K||temp<0){
	        a1[i]=-1;
	    }
	    else{
	    	a1[i]=temp/K;
		}
	}
	for(int i=0;i<T;i++){
	    cout<<a1[i]<<endl;
	}	
	return 0;
}
