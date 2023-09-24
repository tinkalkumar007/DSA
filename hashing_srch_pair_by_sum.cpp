#include<iostream>
#include<map>
using namespace std;
int main(){
	map<int,int> m;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		int key=a[i];
		m[key]=a[i];
	}
	cout<<"Enter the Pair sum: ";
	int s;
	cin>>s;
	for(auto it=m.begin();it!=m.end();it++){
		int search=s-it->first;
		if(m.count(search)==1){
			for(auto entery=it;entery!=m.end();entery++){
				if(entery->first==search){
					cout<<it->first<<","<<entery->first<<endl;
					break;
				}
			}
		}
	}
	
	
	return 0;
}
