#include<iostream>
using namespace std;
bool subsetSum(int a[],int sum,int n){
    // base case
    if(sum==0){
        return true;
    }
    // dp intializer
    bool dp[n+1][sum+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(i==0){
                dp[i][j]=false;
            }
            if(j==0){
                dp[i][j]=true;
            }
        }
    }
    // all possible subset sum
    for(int i=1;i<=n;i++){
        if(a[i-1]<=sum){
            dp[i][sum]=(dp[i][sum-a[i-1]]||dp[i-1][sum]);
        }
        else if(a[i-1]>sum){
            dp[i][sum]=dp[i-1][sum];
        }
    }
    return dp[n][sum];
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    if(sum%2!=0){
        cout<<"False"<<endl;
    }
    else{
        if(subsetSum(a,sum/2,n)){
            cout<<"True"<<endl;
        }
        else{
            cout<<"False"<<endl;
        }
    }
    return 0;
}
