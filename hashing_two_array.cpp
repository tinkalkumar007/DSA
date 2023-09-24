#include<iostream>
#include<map>
#include<vector>
using namespace std;
bool check(map<int,vector<int> > &hashArr){
	for(auto it=hashArr.begin();it!=hashArr.end();it++){
	    for(auto entery: it->second){
	        if(entery){
	            return false;
	        }
		}
	}
	return true;
}
int main(){
	map<int,vector<int> > hashArr;
	int n;
	cin>>n;
	int a1[n];
	int a2[n];
	for(int i=0;i<n;i++){
		cin>>a1[i];
		int key=a1[i];
		hashArr[key].push_back(a1[i]);
	}
	for(int i=0;i<n;i++){
		cin>>a2[i];
		int key=a2[i];
		hashArr[key].pop_back();
	}
	if(check(hashArr)){
		cout<<"Both array having same Elements."<<endl;
	}
	else{
		cout<<"Array are not same!"<<endl;
	}
	return 0;
}
