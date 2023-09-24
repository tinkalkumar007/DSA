#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool compare(string a, string b){
	return a.length()>b.length();
}
int main(){
	string s("Hello");
	cout<<s<<endl;
	
	string s1 ="Hello world";
	cout<<s1.length()<<endl;
	for(int j=0;j<s1.length();j++){
		cout<<s1[j]<<"-";
	}
	string s3;
	cout<<"\n";
	//getline(cin,s3);
	//cout<<s3<<endl;
	// array string
	string s4[]={"apple","baannannan","mango","guava","grapes","pineappppllle"};
	sort(s4,s4+6,compare);
	for(int i=0;i<6;i++){
		cout<<s4[i]<<",";
	}
	
	return 0;
}
