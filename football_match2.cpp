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
	    int team1=1,team2=0;
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
	    if(team1>team2){
	    	cout<<s1<<endl;
		}
		if(team2>team1){
			cout<<s2<<endl;
		}
	}
	return 0;
}

