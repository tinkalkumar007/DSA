#include<iostream>
#include<map>
using namespace std;
class Fruit{
	public:
		string name;
		int value;
		string city;
	public:
		Fruit(){
			
			
		}
		Fruit(string s,int v,string c){
			name=s;
			value=v;
			city=c;
		}
};
int main(){
	// unordered_map is working on C++ 11 version 
	//unordered_map<string,int> Mymap;
	map<string,int> Mymap;
	Fruit f("Mango",100,"Delhi");
	
	Mymap[f.name] = f;
	
	Fruit fs = Mymap["Mango"];
	cout<<fs.city<<endl;
	
	
	/*Mymap["Mango"]=20;
	Mymap.insert(make_pair("Apple",100));
	//Mymap["Guava"]=120;
	
	pair<string,int> p("Guava",120);
	Mymap.insert(p);
	// print
	/for(pair<string,int> node : Mymap){
		cout<<node.first<<","<<node.second<<endl;
	}
	//iterate over bucket
	for(int i=0;i<Mymap.bucket_count();i++){
		//iterate over every linked list
		cout<<"Bucket: "<<i<<"->";
		for(auto it=Mymap.begin(i);it<=Mymap.end(i);it++){
			// it is a pointer to pair
			cout<<it->first<<","<<it->second;
		}
		cout<<endl;		
	}*/
	
	return 0;
}
