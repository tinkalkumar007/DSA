#include <iostream>
using namespace std;
bool matrixSpoon(char a[][100],int r,int c){
    // for row
    for(int i=0;i<r-4;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]=='s'||a[i][j]=='S'){                   
                if((a[i+1][j]=='p'||a[i+1][j]=='P')&&(a[i+2][j]=='o'||a[i+2][j]=='O')&&(a[i+3][j]=='o'||a[i+3][j]=='O')&&(a[i+4][j]=='n'||a[i+4][j]=='N')){
                    return true;
                }
            }
        }
    }
    // for column
    for(int i=0;i<r;i++){
        for(int j=0;j<c-4;j++){
            if(a[i][j]=='s'||a[i][j]=='S'){
                if((a[i][j+1]=='p'||a[i][j+1]=='P')&&(a[i][j+2]=='o'||a[i][j+2]=='O')&&(a[i][j+3]=='o'||a[i][j+3]=='O')&&(a[i][j+4]=='n'||a[i][j+4]=='N')){
                    return true;
                }
            }
        }
    }
    return false;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int r,c;
	    cin>>r>>c;
	    char a[100][100];
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
	            cin>>a[i][j];
	        }
	    }
	    if(matrixSpoon(a,r,c)){
	        cout<<"There is a spoon!"<<endl;
	    }
	    else{
	        cout<<"There is indeed no spoon!"<<endl;
	    }
	}
	return 0;
}

