#include<iostream>
#include<queue>
using namespace std;
class stack{
	queue<int> q,q1;
	public:
		void push(int x){
			q1.push(x);
			while(!q.empty()){
				q1.push(q.front());
				q.pop();
			}
			queue<int> q2=q;
			q=q1;
			q1=q2;
		}
		void pop(){
			if(q.empty()){
				return;
			}
			q.pop();
		}
		int top(){
			if(q.empty()){
				return -1;
			}
			return q.front();
		}
			
};
class stack1{
	queue<int> q1,q2;
	public:
		void push(int x){
			q1.push(x);
		}
		void pop(){
			if(q1.empty()){
				return;
			}
			while(q1.size()!=1){
				q2.push(q1.front());
				q1.pop();
			}
			q1.pop();
			queue<int> q=q1;
			q1=q2;
			q2=q;
		}
		int top(){
			if(q1.empty()){
				return -1;
			}
			while(q1.size()!=1){
				q2.push(q1.front());
				q1.pop();
			}
			int temp=q1.front();
			q1.pop();
			q2.push(temp);
			queue<int> q=q1;
			q1=q2;
			q2=q;
			return temp;
		}
	
};
int main(){
	stack1 s;
	for(int i=1;i<5;i++){
		s.push(i);
	}
	int j=5;
	while(j>1){
		cout<<s.top()<<endl;
		s.pop();
		j--;
	}
	
	return 0;
}
