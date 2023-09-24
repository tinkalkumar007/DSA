#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int count=0;
	    // if first char symbol is -
	    if(s[0]=='-'){
	        for(int i=1;i<s.length();i++){
	            if(i%2==0&&s[i]!='-'){
	                count++;
	            }
	            else if(i%2==1&&s[i]!='+'){
	                count++;
	            }
	        }
	        cout<<count<<endl;
	    }
	    // if first char symbol is +
	    if(s[0]=='+'){
	        for(int i=1;i<s.length();i++){
	            if(i%2==0&&s[i]!='+'){
	                count++;
	            }
	            else if(i%2==1&&s[i]!='-'){
	                count++;
	            }
	        }
	        cout<<count<<endl;
	    }  
	}
	return 0;
}

