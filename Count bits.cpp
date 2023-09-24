#include<iostream>
using namespace std;
int countBits(int n){
	int count=0;
	while(n>0){
		count+=(n&1);
		n=n>>1;
	}
	return count;
}
int countBitsFast(int n){
	int count=0;
	while(n>0){
		count+=1;
		n=n&(n-1);
		//cout<<n<<" ";
	}
	return count;
}
int getIthbits(int n,int i){
	return (n&(1<<i))!=0?1:0;
}
// change ith bit
int changeIthbit(int n,int i){
	n=(n^(1<<i));
	return n;
	
}
// change ith bit to 1
int changeIthbit1(int n,int i){
	n=n|(1<<i);
	return n;
}
// clear bit
int clearBit(int n, int i){
	int mask=~(1<<i);
	return n&mask;
	
}


int main(){
	int n,i;
	cin>>n>>i;
	cout<<countBits(n)<<endl;
	// more efficient way
	cout<<countBitsFast(n)<<endl;
	// get ith bits
	cout<<getIthbits(n,i)<<endl;
	// change ith bit
	cout<<changeIthbit(n,i)<<endl;
	// change ith bit to 1
	cout<<changeIthbit1(n,i)<<endl;
	// clear ith bit to 0
	cout<<clearBit(n,i)<<endl;
	return 0;
}
