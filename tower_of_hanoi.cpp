#include<iostream>
using namespace std;
void towerOfhanoi(int n,char src,char dest,char helper){
	//base case
	if(n==0){
		return;
	}
	towerOfhanoi(n-1,src,helper,dest);
	cout<<"Move "<<n<<" Dish From "<<src<<" to "<<dest<<endl;
	towerOfhanoi(n-1,helper,dest,src);
}

int main(){
	int n;
	cin>>n;
	towerOfhanoi(n,'A','C','B');
	
	return 0;
}
