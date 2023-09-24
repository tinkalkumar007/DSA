#include<iostream>
#include<queue>
using namespace std;
class Stack{
	public:
		int data;
		queue<int> Q1;
		queue<int> Q2;
		// make a push function
		void push(int data){
			Q1.push(data);
		}
		// make a top function
		int top(){
			if(Q1.empty()){
				return 0;
			}
			while(Q1.size()-1){
				Q2.push(Q1.front());
				Q1.pop();
			}
			int temp=Q1.front();
			Q1.pop();
			Q2.push(temp);
			queue<int> Q;
			Q=Q1;
			Q1=Q2;
			Q2=Q;
				
			return temp;
		}
		// make a pop function
		void pop(){
			while(Q1.size()-1){
				Q2.push(Q1.front());
				Q1.pop();
			}
			Q1.pop();
			queue<int> Q;
			Q=Q1;
			Q1=Q2;
			Q2=Q;
			
			return;
		}
		// make an empty function
		bool empty(){
			return Q1.size()==0;
		}
};
int main(){
	//queue<int> Q1;
	//queue<int> Q2;
	Stack S;
	for(int i=1;i<=6;i++){
		S.push(i);
	}
	while(!S.empty()){
		cout<<S.top()<<" ";
		S.pop();
	}
	
	return 0;
}
