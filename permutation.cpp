#include<iostream>
#include<cstring>
using namespace std;
bool permutation(char *s1,char *s2){	
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	if(l1!=l2){
		return false;
	}
	int frq[26]={0};
	for(int i=0;i<l1;i++){
		frq[s1[i]-'a']++;
	}
	for(int i=0;i<l2;i++){
		frq[s2[i]-'a']--;
	}
	for(int i=0;i<26;i++){
		if(frq[i]!=0){
			return false;
		}
		return true;
	}
	
}
int main(){
	char s1[100],s2[100];
	cin>>s1>>s2;
    
    if(permutation(s1,s2)){
    	cout<<"This is permutation";
	}
	else{
		cout<<"This is not permutation";
	}	
	
	return 0;
}
