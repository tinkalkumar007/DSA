#include<iostream>
#include<queue>
#include<vector>
#include<functional>
using namespace std;
// this library uses all the functions
//#include<bits/stdc++.h>
int main(){
	//priority_queue<int> pq; this was the max heap
	// lets create a min heap
	priority_queue<int,vector<int>,greater<int> > pq;
	int a[7]={2,5,13,17,9,20,11};
	for(int i=0;i<7;i++){
		pq.push(a[i]);
	}
	// heap contents push pop empty top all these functions
	while(!pq.empty()){
		cout<<pq.top()<<" ";
		pq.pop();
	}
	return 0;
}
