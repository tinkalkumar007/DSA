#include<iostream>
#include"hash_table.h"
using namespace std;
int main(){
	// fruits as keys and prices as values
	Hashtable<int> h(7);
	h.insert("Mango",100);
	h.insert("Apple",110);
	h.insert("Guava",120);
	h.insert("Chiku",130);
	h.insert("Banana",140);
	
	h.print();
	cout<<endl;
	/*string key;
	cin>>key;
	int* price= h.search(key);
	if(price==NULL){
		cout<<"Not Found!"<<endl;
	}
	else{
		cout<<"Price is "<<*price<<endl;
	}*/
	//cout<<endl;
	//h.erase("Chiku");
	//h.print();
	
	return 0;
}
