#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a[50];
	    int count=0;
	    for(int i=0;i<51;i++){
	    	cin>>a[i];
	        count++;
	    	if(cin.peek()=='\n') break; 
	    }
	    sort(a,a+count);
	    if(a[count-1]==count-1){
	        cout<<a[count-2]<<endl;
	    }
	    else{
	        cout<<a[count-1]<<endl;
	    }
	    
	    
	}
	return 0;
}

