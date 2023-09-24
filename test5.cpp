#include<iostream>
#include<algorithm>
#include<ctime>
#include<cstdlib>
using namespace std;
void shuffle(int *a,int s,int e){
	srand(time(NULL));
	int i,j,temp;
	for(int i=e;i>0;i--){
		//create one random index
		j=rand()%(i+1);
		swap(a[i],a[j]);
	}
	
}
void mergeSort(int *a,int s,int e){
    int i=s-1;
    int p=a[e];
    //int temp[];
    //base case
    if(s>=e){
        return;
    }
    for(int j=s;j<e;j++){
        if(a[j]<p){
            i++;
            swap(a[j],a[i]);
        }
    }
    i++;
    swap(a[e],a[i]);
    mergeSort(a,0,i-1);
    mergeSort(a,i+1,e);
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n]={0};
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	shuffle(a,0,n-1);
	mergeSort(a,0,n-1);
	for(int i=0;i<n;i++){
	    cout<<a[i]<<endl;
	}
	
	
	return 0;
}

