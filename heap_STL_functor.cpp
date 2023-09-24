#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Car{
	public:
		int x;
		int y;
		int id;
		// constructor
		Car(int id,int x,int y){
			this->id=id;
			this->x=x;
			this->y=y;	
		}
		int dist(){
			return x*x+y*y;
		}
		void print(){
			cout<<"Id : "<<id;
			cout<<"Location : "<<x<<", "<<y<<endl;
		}
		
};
// functor -> functional object but it can works as function too
class carCompare{
	public:
		//method to overload opertaor
		bool operator()(Car a,Car b){
			return a.dist()< b.dist();
		}	
};
int main(){
	priority_queue<Car,vector<Car>,carCompare> pq;
	int x[8]={5,6,17,18,9,11,0,3};
	int y[8]={1,-2,8,9,10,91,1,2};
	
	// insert element in heap
	for(int i=0;i<8;i++){
		Car c(i,x[i],y[i]);
		pq.push(c);
	}
	while(!pq.empty()){
		Car p=pq.top();
		p.print();
		pq.pop();
	}
	
	return 0;
}

