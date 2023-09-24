#include<iostream>
using namespace std;
bool finalScore(char a[],int i){
	int x=0,y=0;
	for(int j=i;a[j]!='/0';j++){
		if(a[j]=='0'){
			x++;
		}
		else if(a[j]=='1'){
			y++;
		}
		if(x-y==2){
			return false;
		}
		else if(y-x==2){
			return true;
		}
	}
}
bool gameRes(char a[]){
	int count0=0;
	int count1=0;
	for(int i=0;a[i]!='/0';i++){
		if(a[i]=='0'){
			count0++;
		}
		else if(a[i]=='1'){
			count1++;
		}
		if(count0==11&&count1<10){
			return false;
		}
		if(count1==11&&count0<10){
			return true;
		}
		if(count0==10&&count1==10){
			return finalScore(a,i+1);
			break;
		}
	}
}
int main(){
	int t;
	cin>>t;
	char a[100];
	for(int i=0;i<t;i++){
		cin>>a;
		if(gameRes(a)){
			cout<<"win"<<endl;
		}
		else{
			cout<<"Lose"<<endl;
		}
	}
	return 0;
}
