#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
bool checkForPair(stack<int> S){
	int temp=S.top();
	S.pop();
	if(abs(S.top()-temp)==1){
		S.pop();
	}
	while(!S.empty()){
		int temp=S.top();
		S.pop();
		if(abs(S.top()-temp)!=1){
			return false;
		}
		else{
			S.pop();
		}
	}
	return true;
}
int main(){
	stack<int> S;
	int d;
	cin>>d;
	S.push(d);
	while(!S.empty()){
		cin>>d;
		if(d==-1){
			break;
		}
		else{
			S.push(d);
		}
	}
	if(checkForPair(S)){
		cout<<"Paired "<<endl;
	}
	else{
		cout<<"Not Paired!"<<endl;
	}
	return 0;
}
