#include<iostream>
#include<map>
#include<vector>
using namespace std;
class Pair{
public:
	int first;
	int second;
	Pair(int first,int second){
		this->first=first;
		this->second=second;
	}
};
int main(){
	map<int,vector<int> > m;
	cout<<"Enter Pairs: "<<endl;
	int x,y;
	int a[6];
	int j=0;
	for(int i=0;i<6;i++){
		cin>>x>>y;
		Pair p(x,y);
		int key=p.first;
		int value=p.second;
		m[key].push_back(value);
		if(i>0){
			if(m.count(value)==1){
				for(auto entery: m[value]){
					if(entery==key){
					    cout<<"Pair!"<<endl;
					}
				}
			}
		}
	}
	return 0;
}
