#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class Pair{
	public:
		int n;
		char x;
		// Constructor
		Pair(int n,char x){
			this->n=n;
			this->x=x;
		}
		void Print(){
			cout<<n<<" ";
		}	
};
int main(){
	priority_queue<Pair,vector<Pair>,greater<int> > pq;
	queue<int> Q;
	int a[]={0,4,10,12};
	int b[]={1,3,5,7};
	int c[]={2,4,12,15,20};
	int k=3;
	int i=0;
	while(k>0){
		Pair p(a[i],x);
		pq.push(p);
		k--;
	}
	while(!pq.empty()){
		Pair p=pq.top();
		p.Print();
		pq.pop();
	}
	
	return 0;
}
