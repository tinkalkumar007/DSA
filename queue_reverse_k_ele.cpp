#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main(){
	queue<int> Q;
	stack<int> S;
	int n;
	cin>>n;
	int a[n]={0};
	for(int i=1;i<=n;i++){
		a[i]=a[i-1]+1;
		Q.push(a[i]);
	}
	int k;
	cin>>k;
	int x=k;
	while(k>0){
		S.push(Q.front());
		Q.pop();
		k--;
	}
	for(int i=1;i<=n;i++){
		if(i<=x){
			cout<<S.top()<<" ";
			S.pop();
		}
		else{
			cout<<Q.front()<<" ";
			Q.pop();
		}
	}
	return 0;
}
