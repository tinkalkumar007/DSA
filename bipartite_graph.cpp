#include<iostream>
#include<list>
#include<queue>
using namespace std;
class Graph{
	int V;
	list<int> *l;
	public:
	Graph(int v){
		V=v;
		l=new list<int> [V];
	}
	void addEdge(int u,int v,bool bidir=true){
		l[u].push_back(v);
		if(bidir){
			l[v].push_back(u);
		}
	}
	bool bipartite(int s){
		queue<int> q;
		int *colours=new int[V];
		for(int i=0;i<V;i++){
			colours[i]=-1;
		}
		q.push(s);
		colours[s]=1;
		while(!q.empty()){
			int u=q.front();
			q.pop();
			for(auto v:l[u]){
				if(colours[v]==-1){
					colours[v]=colours[u]-1;
					q.push(v);
				}
				if(colours[u]==colours[v]){
					return false;
				}
			}
		}
		return true;
	}
	
};
int main(){
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,3);
	g.addEdge(2,3);
	g.addEdge(0,3);
	
	if(g.bipartite(0)){
		cout<<"Yes, It is!"<<endl;
	}
	else{
		cout<<"No, it is not!"<<endl;
	}
	
	return 0;
}

