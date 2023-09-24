#include<iostream>
#include<map>
using namespace std;
int main(){
	map<int,int> Buckets;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		Buckets.insert(make_pair(a[i],a[i]));
	}
	for(auto it=Buckets.begin();it!=Buckets.end();it++){
		cout<<it->second<<" ";
	}
	return 0;
}
