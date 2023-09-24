#include<iostream>
using namespace std;
float Sqrt(int no,int p){
	int s=0,e=no;
	float ans;
	while(s<=e){
		int m=(s+e)/2;
		if(m*m==no){
			ans=m;
			break;
		}
		if(m*m<no){
			s=m+1;
			ans=m;
		}
		else{
			e=m-1;
			//ans=m;
		}
		
	}
	//square root
	float inc=0.1;
	for(int i=0;i<p;i++){
		while(ans*ans<=no){
			ans+=inc;			
		}
		ans-=inc;
		inc=inc/10;
		
	}
	
	
	
	return ans;
	
}
int main(){
	int no,p;
	// Enter the no for square root
	cout<<"Enter Number and precision:- "<<endl;
	cin>>no>>p;
	// square root of a number by binary srch
	float ans=Sqrt(no,p);
	cout<<ans;
	
	return 0;
}
