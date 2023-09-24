#include<iostream>
#include<deque>
using namespace std;
int main() {
	int num;	
	cin >> num;
	deque<int> A,B;
	int x=2;
	int y=1;
	int z=0;
	int a[num];
	for(int i=0;i<num;i++){
		cin>>a[i];
		A.push_back(a[i]);
		B.push_back(a[i]);
	}
	while(!A.empty()&&!B.empty()){
		if(A.front()>B.back()){
			cout<<y<<" ";
			B.pop_back();
		}
		if(A.front()<B.back()){
			cout<<x<<" ";
			A.pop_front();
		}
		else if(A.front()==B.back()){
			cout<<z<<" ";
			A.pop_front();
			B.pop_back();
		}
	}
	return 0;
}
