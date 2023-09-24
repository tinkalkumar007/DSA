#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
	    int N,M,X,Y;
		cin>>N>>M;
		cin>>X>>Y;
		string res;
		for(int i=0;i<N;i++){
		    string s;
			cin>>s;
			int p=0,f=0;
			for(int j=0;j<M;j++){
				if(s[j]=='F') f++;
				if(s[j]=='P') p++;
			}
			if(f>=X||(f==X-1&&p>=Y)){
				cout<<"1";
			}
			else{
				cout<<"0";
			}
		}
		cout<<endl;
	}
	return 0;
}
