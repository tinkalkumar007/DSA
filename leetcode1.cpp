#include<bits/stdc++.h>
using namespace std;
int romanNo(char a){
	int no=0;
	if(a=='I') no+=1;
	if(a=='X') no+=10;
	if(a=='V') no+=5;
	if(a=='L') no+=50;
	if(a=='C') no+=100;
	if(a=='D') no+=500;
	if(a=='M') no+=1000;
	
	return no;
}
int main(){
    string s;
    cin>>s;
    int no=0;
    int visited[15]={0};
    for(int i=0;i<s.length();i++){
        if((s[i]=='I'&&visited[i]==0)&&(s[i+1]=='V'||s[i+1]=='X')){      	
            if(s[i+1]=='V') no+=4;
            else no+=9;
            visited[i+1]=1;
        }
        else if(s[i]=='X'&&(s[i+1]=='L'||s[i+1]=='C')&&visited[i]==0){
        	if(s[i+1]=='L') no+=40;
        	else no+=90;
        	visited[i+1]=1;
		}
        else if(s[i]=='C'&&(s[i+1]=='D'||s[i+1]=='M')&&visited[i]==0){
        	if(s[i+1]=='D') no+=400;
        	else no+=900;
        	visited[i+1]=1;
		}
		else{
			if(visited[i]==0) {
				no+=romanNo(s[i]);
				visited[i]=1;
			}
		}
    }
    cout<<no<<endl;
    
    return 0;
}
