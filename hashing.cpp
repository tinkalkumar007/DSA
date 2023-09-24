#include<iostream>
#include<map>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main(){
	map<string,int> m;
	// insert one way
	m["Mango"]=120;
	// insertion other way
	m.insert(make_pair("Apple",100));
	// Deletion
	m.erase("Mango");
	// search
	// count function returns 1 if key is present otherwise 0;
	if(m.count("Mango")==1){
		cout<<"Price of Mango is "<<m["Mango"]<<endl;
	}
	else{
		cout<<"Mango is not Present!"<<endl;
	}
	// iterator to search
	/*auto f = m.find("Mango");
	if(f!=m.end()){
		cout<<"Price of Mango is "<<(f->second)<<endl;
	}*/
	
	return 0;
}
