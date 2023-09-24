#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<int> Q1;
	queue<int> Q2;
	int n;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i<=n/2){
			Q1.push(a[i]);
		}
		else{
			Q2.push(a[i]);
		}
	}
	while(!Q1.empty()&&!Q2.empty()){
		cout<<Q1.front()<<" ";
		Q1.pop();
		cout<<Q2.front()<<" ";
		Q2.pop();
	}
	if(n&1){
		cout<<Q2.front()<<" ";
		Q2.pop();
	}
	
	return 0;
}
