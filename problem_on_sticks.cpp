#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	set<int> s;
	for(int i=0;i<t;i++){
		cin>>n;
		int m;
		for(int j=0;j<n;j++){
			cin>>m;
			s.insert(m);
		}
		int size=s.size();
		if(size==1){
			if(*s.begin()==0){
				cout<<0<<endl;
			}
			else{
				cout<<size<<endl;
			}
		}
		else{
			if(*s.begin()==0){
				cout<<size-1<<endl;
			}
			else{
				cout<<size<<endl;
		    }
		}
		s.clear();
	}
	
	return 0;
}
