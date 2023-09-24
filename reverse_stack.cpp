#include<iostream>
#include<stack>
using namespace std;
void insertAtbottom(stack<int>&s,int x){
	if(s.empty()){
		s.push(x);
		return;
	}
	int y=s.top();
	s.pop();
	insertAtbottom(s,x);
	s.push(y);
}
void reverseStackRec(stack<int>&s){
	if(s.empty()){
		return;
	}
	int x=s.top();
	s.pop();
	reverseStackRec(s);
	insertAtbottom(s,x);
}
int main(){
	stack<int> obj;
	stack<int> obj2;
	int n;
	for(int i=1;i<=5;i++){
		n++;
		obj.push(i);
	}/*
	while(n>0){
		int last=obj.top();
		obj.pop();
		for(int i=0;i<n-1;i++){
			obj2.push(obj.top());
			obj.pop();
		}
		obj.push(last);
		for(int j=0;j<n-1;j++){
			obj.push(obj2.top());
			obj2.pop();
		}
		n--;	
	}
	while(!obj.empty()){
		cout<<obj.top()<<endl;
		obj.pop();
	}
	cout<<endl;*/
	reverseStackRec(obj);
	while(!obj.empty()){
		cout<<obj.top()<<endl;
		obj.pop();
	}
	
	return 0;
}
