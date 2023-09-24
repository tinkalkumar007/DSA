#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s1;
	    cin>>s1;
	    int team1=0,team2=0;
	    for(int i=1;i<n;i++){
	        string s;
	        cin>>s;
	        if(s==s1){
	            team1++;
	        }
	        else{
	            string s2=s;
	            team2++;
	        }
	    }
	    if(team1==team2){
	        cout<<"Draw"<<endl;
	    }
	    
	    
	}
	return 0;
}

