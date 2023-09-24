#include<iostream>
#include<cstring>
using namespace std;
void setBit(char *a,int n){
	int i=0;
	while(n>0){
		(n&1)?cout<<a[i]:cout<<"";
		n=n>>1;
		i++;
		//cout<<endl;
	}
	cout<<endl;
	
	
}
void bitsMasking(char *a){
	int n=strlen(a);
	int range=(1<<n)-1;
	//cout<<range<<endl;
	for(int i=0;i<=range;i++){
		setBit(a,i);		
	}
	
}

int main(){
	char a[100];
	cin>>a;
	bitsMasking(a);
	return 0;
}
