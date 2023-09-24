// product of an array expect self
#include<bits/stdc++.h>
using namespace std;
void productExpectSelf(int a[],int product[],int n){
    if(n<=0){
        return;
    }
    int temp=1;
    for(int i=0;i<n;i++){
        product[i]=temp;
        temp*=a[i];
    }
    temp=1;
    for(int i=n-1;i>=0;i--){
        product[i]*=temp;
        temp*=a[i];
    }
    return;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int product[n]={1};
    //memset(product,1,sizeof(product));
    productExpectSelf(a,product,n);
    for(int i=0;i<n;i++){
        cout<<product[i]<<" ";
    }
    return 0;
}