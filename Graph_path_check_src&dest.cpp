#include<iostream>
#include<map>
#include<list>
using namespace std;
class Graph{
	map<int,list<int> > adjList;
	public:
		Graph(){
			
		}
		void addEdge(int u,int v,bool bidir=true){
			adjList[u].push_back(v);
			if(bidir){
				adjList[v].push_back(u);
			}
		}
		bool dfsHelper(int node,map<int,bool>&visited,int dest){
			if(node==dest){
				return true;
			}
			visited[node]=true;
			for(auto neighbour:adjList[node]){
				if(!visited[neighbour]){
					return dfsHelper(neighbour,visited,dest);
				}
			}
			//return false;
		}
		void dfs(int src,int dest){
			map<int,bool> visited;
			//visited[src]=true;
			if(dfsHelper(src,visited,dest)){
				cout<<"There is a path from "<<src<<" to "<<dest<<endl;
			}
			else{
				cout<<"Path doesn't exist!"<<endl;
			}
		}
};
int main(){
	Graph g;
	g.addEdge(0,2);
	g.addEdge(0,1);
	g.addEdge(1,4);
	g.addEdge(2,4);
	g.addEdge(2,3);
	g.addEdge(5,6);
	
	g.dfs(0,6);
	return 0;
}
