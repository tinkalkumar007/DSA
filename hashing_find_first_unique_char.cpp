#include<iostream>
#include<map>
#include<cstring>
using namespace std;
int main(){
	map<char,int> m;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		m[s[i]]+=1;
	}
	for(auto it=m.begin();it!=m.end();it++){
		if(it->second==1){
			cout<<it->first<<endl;
			break;
		}
	}
	return 0;
}
