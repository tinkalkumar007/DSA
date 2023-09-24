#include<iostream>
#include<stack>
using namespace std;
void findPrice(int *a,int n){
	stack<int> s1,s2;
	int x=n;
	for(int i=0;i<n;i++){
		s1.push(a[i]);
	}
	while(!s1.empty()){
		int temp=s1.top();
		s1.pop();
		int k=0;
		while(!s1.empty()){
			k++;
			if(temp>=s1.top()){
				s2.push(s1.top());
				s1.pop();
			}
			else{
				a[n-1]=k;
				while(!s2.empty()){
					s1.push(s2.top());
					s2.pop();
				}
				n--;
				break;
			}
		}		
	}
	a[0]=0;
	for(int i=0;i<x;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	findPrice(a,n);
	
	return 0;
}
