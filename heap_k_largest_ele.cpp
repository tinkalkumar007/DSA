#include<iostream>
#include<queue>
#include<vector>
using namespace std;
// make a copy of heap and do poping in it.
void query_print(priority_queue<int,vector<int>,greater<int> > h){
	while(!h.empty()){
		cout<<h.top()<<" ";
		h.pop();
	}
	cout<<endl;
	return ;
}
int main(){
	priority_queue<int,vector<int>,greater<int> > h;
	int k=3;
	int cs=0;
	int no;
	// this will take stream of array
	while(scanf("%d",&no)!=EOF){
		if(no==-1){
			query_print(h);
		}
		else if(cs<k){
			h.push(no);
			cs++;
		}
		else if(no>h.top()){
			h.pop();
			h.push(no);
		}
    }
	return 0;
}
