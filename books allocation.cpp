#include<iostream>
using namespace std;
int booksAllocation(int a[],int N,int M){
	int sum=0,mid;
	int ans=-1;
	for(int i=0;i<N;i++){
		sum+=a[i];
	}
	int s=0,e=sum;
	while(s<=e){
		int mid=(s+e)/2;
		int i=0,j=0,n=1,a1[N]={0};
		while(i<N){
			a1[j]+=a[i];
			if(a1[j]<=mid){
				i++;
				continue;
			}
			else{
				n+=1;
				a1[j]-=a[i];
				a1[j+1]=a[i];
				j++;
			}
			ans=mid;
			i++;
		}
		if(n>M){
			s=mid+1;
		}
		if(n<=M){
			e=mid-1;
		}		
	}
	//cout<<ans<<endl;
	return ans;
}


int main(){
	int N,M;
	int a[100];
	cout<<"No of Books and Students "<<endl;
	cin>>N>>M;
	cout<<"No of Pages in "<<N<<" Books!"<<endl;
	for(int i=0;i<N;i++){
		cin>>a[i];
	}
	//books allocations to students
	cout<<booksAllocation(a,N,M);
	
	return 0;
}
