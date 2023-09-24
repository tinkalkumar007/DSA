#include<bits/stdc++.h>
using namespace std;
int main(){
	int N1,N2,N3;
	cin>>N1>>N2>>N3;
	int a[N1+N2+N3];
	map<int,int> m;
	int count=0;
	int a1[max(N1,max(N2,N3))];
	for(int i=0;i<N1+N2+N3;i++){
		cin>>a[i];
		m[a[i]]++;
		if(m[a[i]]>=2){
			a1[count]=a[i];
			count++;
			m[a[i]]=0;
		}
	}
	cout<<count<<endl;
	sort(a1,a1+count);
	for(int i=0;i<count;i++){
		cout<<a1[i]<<endl;
	}
	return 0;
}
