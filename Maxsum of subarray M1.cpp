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
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			currentSum=0;
			for(int k=i;k<=j;k++){
				currentSum+=a[k];
			//	cout<<a[k]<<",";				
			}
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
