# include<iostream>
using namespace std;
/*int subarraySum(int arr[],int n,long long s){
	int cumSum[]={0};
	int left=0;
	int right=0;
	int k=0;
	cumSum[0]=arr[0];
	for(int i=1;i<n;i++){
		cumSum[i]=cumSum[i]+cumSum[i-1];
	}
	for(int i=0;i<n;i++){
		k++;
		for(int j=i;j<n;j++){
			if((cumSum[j]-cumSum[i-1])==s){
				left=i;
				right=j;
				return (left,right);
				break;
			}
		}
	}
	if (k==n){
		return -1;
	}
	
}*/
int main(){
	/*int n,s;
	int y;
	int a[]={0};
	cin>>n>>s;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int x =subarraySum(a[],n,s);*/
	int n;
	//int currentSum=0;
	int S;
	//int maxSum=0;
	int left=0;
	int right=0;
	
	cin>>n;
	cin>>S;
	int a[]={0};
	int cumSum[]={0};
	cout<<S;
	cin>>a[0];
	cumSum[0]=a[0];
	for(int i=1;i<n;i++){
		cin>>a[i];
		cumSum[i]=cumSum[i-1]+a[i];
	}
	cout<<cumSum[n]<<endl;
	cout<<S<<endl;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int k=(cumSum[j]-cumSum[i-1]);
			
			if(k==S){
				//cout<<S<<endl;
				cout<<cumSum[j]<<endl;
				cout<<cumSum[i-1]<<endl;
				//cout<<i<<endl;
				//cout<<j<<endl;
				break;
	    	}
		}
	}
	//cout<<(left)<<(right)<<endl;
	return 0;
      
}
