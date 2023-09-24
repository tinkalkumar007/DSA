#include<iostream>
using namespace std;
int main(){
	int i=5;
	for(int j=0;j<31;j++){
		
		//cout<<(1<<j)<<" ";
		if(i&(1<<j)){
			cout<<j+1<<" ";
		}
    }
	
	return 0;
}
