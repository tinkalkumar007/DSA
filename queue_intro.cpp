#include<iostream>
using namespace std;
template<typename T>
class Queue{
	T *arr;
	T f;
	T r;
	T ms;
	T cs;
public:
	// constructor
	Queue(T ds=5){
		f=0;
		ms=ds;
		r=ms-1;
		cs=0;
		arr=new T[ms];
	}
	bool isFull(){
		return cs==ms;
	}
	bool isEmpty(){
		return cs==0;
	}
	void push(T d){
		if(!isFull()){
			r=(r+1)%ms;
			arr[r]=d;
			cs++;
		}
	}
	void pop(){
		if(!isEmpty()){
			f=(f+1)%ms;
			cs--;
		}
	}
	T getFront(){
		return arr[f];
	}
};
int main(){
	Queue<int> q;
	for(int i=1;i<=6;i++){
		q.push(i);
	}
	q.pop();
	q.push(8);
	while(!q.isEmpty()){
		cout<<q.getFront()<<endl;
		q.pop();
	}
	return 0;	
}
