#include<iostream>
#include<deque>
using namespace std;
int main(){
	int n,k;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	int i=0;
	deque<int> Q(k);
	for(i=0;i<k;i++){
		while(!Q.empty() && a[i]>a[Q.back()]){
			Q.pop_back();
		}
		Q.push_back(i);
	}
	for(;i<n;i++){
		cout<<a[Q.front()]<<" ";
		// Remove the element which are not the part of window
		while(!Q.empty() && (i-k)>=Q.front()){
			Q.pop_front();
		}
		// Remove the element which are not useful and are the part of window
		while(!Q.empty() && a[i]>=a[Q.back()]){
			Q.pop_back();
		}
		// Add new elements
		Q.push_back(i);	
	}
	cout<<a[Q.front()]<<endl;
	return 0;
}
