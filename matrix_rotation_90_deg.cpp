#include<bits/stdc++.h>
using namespace std;
void rotate_clock_Wise(vector<vector<int>>& arr,int n){
    int sr=0,sc=0,er=n-1,ec=n-1;
    while(sr<er && sc<ec){
        for(int i=sr;i<er;i++){
            swap(arr[i][sr],arr[er][i]);
            swap(arr[er][i],arr[n-i-1][ec]);
            swap(arr[n-i-1][ec],arr[sr][n-i-1]);
        }
        sr++,er--,ec--,sc++;
    }
    return;
}
void rotate_anti_clock_wise(vector<vector<int>>& arr,int n){
    int sr=0,sc=0,er=n-1,ec=n-1;
    while(sr<er && sc<ec){
        for(int i=sc;i<ec;i++){
            swap(arr[sr][i],arr[i][er]);
            swap(arr[i][er],arr[ec][n-i-1]);
            swap(arr[ec][n-i-1],arr[n-i-1][sr]);
        }
        sr++,er--,ec--,sc++;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            arr[i][j]=x;
        }
    }
    cout<<endl;

    rotate_clock_Wise(arr,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    rotate_anti_clock_wise(arr,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}