#include<iostream>
#include<list>
using namespace std;
class Graph{
	int V;
	list<pair<int,int> > *l;
	public:
		Graph(int v){
			V=v;
			l=new list<pair<int,int> > [V];
		}
		void addEdge(int u,int v,int cost){
			l[u].push_back(make_pair(v,cost));
			l[v].push_back(make_pair(u,cost));
		}
		int dfsHelper(int node,bool *visited,int *count,int &ans){
			visited[node]=true;
			count[node]=1;
			for(auto neighbour:l[node]){
			    int v=neighbour.first;
				if(!visited[v]){
					count[node]+=dfsHelper(v,visited,count,ans);
					int N=V;
					int s=count[v];
					ans+=(2*min(s,N-s)*neighbour.second);
				}
			}
			return count[node];
		}
		int dfsHoli(){
			int *count=new int [V]{0};
			bool *visited=new bool [V]{0};

			int ans=0;
			dfsHelper(0,visited,count,ans);
			return ans;
		}
};
int main(){
	Graph g(4);
	g.addEdge(0,1,3);
	g.addEdge(1,2,2);
	g.addEdge(2,3,2);
	
	cout<<g.dfsHoli();
		
	return 0;
}	
