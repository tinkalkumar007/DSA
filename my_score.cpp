#include<bits/stdc++.h>
using namespace std;
int myScore(map<int,list<int> > m){
	int score=0;
	for(int i=1;i<=8;i++){
		int max=0;
		for(auto it:m[i]){
			if(it>max){
				max=it;
			}
		}
		score+=max;
	}
	return score;
}
int main(){
	map<int,list<int> > m;
	int t,n;
	cin>>t;
	int x,y;
	for(int i=0;i<t;i++){
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>x>>y;
			m[x].push_back(y);
		}
		cout<<myScore(m)<<endl;
		m.clear();
	}
	
	return 0;
}
