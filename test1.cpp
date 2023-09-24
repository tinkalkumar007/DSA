#include<iostream>
using namespace std;
int main(){
	int n;
	int s;
	int arr[]={0};
	int cumSum[]={0};
	cin>>n;
	cin>>s;
	cin>>arr[0];
	cumSum[0]=arr[0];
	for(int i=1;i<n;i++){
		cin>>arr[i];
		cumSum[i]=cumSum[i-1]+arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<cumSum[i]<<",";
	}
	cout<<n<<endl;
	cout<<s;
	
	return 0;
}
