#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
double median_print(priority_queue<int> h_max,priority_queue<int,vector<int>,greater<int> > h_min){
	float ans;
	if(h_max.size()-h_min.size()==1){
		return h_max.top();
	}
	if(h_min.size()-h_max.size()==1){
		return h_min.top();
	}
	else{
		ans=(h_max.top()+ h_min.top())/2.0;
	}
	return ans;
}
int main(){
	priority_queue<int,vector<int>,greater<int> > h_min;
	priority_queue<int> h_max;
	int no;
	float median=0;
	while(scanf("%d",&no)!=EOF){
		//median=median_print(h_max,h_min);
		if(no==-1){
			median=median_print(h_max,h_min);
			cout<<median<<endl;
		}
		else if(no>median){
			h_min.push(no);
		}
		else if(no<median){
			h_max.push(no);
		}
		while(abs(h_max.size()-h_min.size())>1){
	    	if(h_max.size()>h_min.size()){
	    		h_min.push(h_max.top());
	     		h_max.pop();
	    	}
	    	else if(h_max.size()<h_min.size()){
	    		h_max.push(h_min.top());
	     		h_min.pop();
	    	}
    	}
    	//cout<<h_max.size()<<" "<<h_min.size()<<endl;
	}
	return 0;
}
