# include<iostream>
using namespace std;
int main(){
	int n;
	int currentSum=0;
	int maxSum=0;
	
	int left=0;
	int right=0;
	
	cin>> n;
	int a[100];
	int cumSum[100]={0};
	
	cin>>a[0];
	cumSum[0]=a[0];
	for(int i=1;i<n;i++){
		cin>>a[i];
		cumSum[i]=cumSum[i-1]+a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			currentSum=0;
			currentSum=cumSum[j]-cumSum[i-1];				

			if(currentSum>maxSum){
				maxSum=currentSum;
				left=i;
				right=j;
			}
		    //cout<<endl;
		}
	}
	cout<<"Maximum sum is "<<maxSum<<endl;
	for(int k=left;k<=right;k++){
		cout<<a[k]<<",";
	}
	return 0;
      
}
