#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
bool paranthesis(string str){
	stack<char> s;
	for(int i=0;i<str.size();i++){
		char curr=str[i];
		if(curr=='('||(curr=='{'||curr=='[')){
			s.push(curr);
		}
		else {
			if(curr==')'){
				if(s.empty()||s.top()!='('){
				    return false;
			    }
			}
			if(curr=='}'){
				if(s.empty()||s.top()!='{'){
					return false;
				}
			}
			if(curr==']'){
				if(s.empty()||s.top()!='['){
					return false;
				}
			}
			s.pop();
		}
	}
	return s.empty();	
}
int main(){
	string str;
	cin>>str;
	cout<<paranthesis(str)<<endl;
	
	return 0;
}
