#include<iostream>
#include<map>
#include<list>
using namespace std;
template<typename T>
class Graph{
	map<T,list<T> > adjList;
	public:
		Graph(){
			
		}
		void addEdge(T u,T v,bool bidir=true){
			adjList[u].push_back(v);
			if(bidir){
				adjList[v].push_back(u);
			}
		}
		void print(){
			for(auto i:adjList){
				cout<<i<<"-->";
				for(auto entery:i->second){
					cout<<entery<<",";
				}
				cout<<endl;
			}
		}
		void dfsHelper(T node, map<T,bool> &visited){
			// mark the node as visited
			visited[node]=true;
			cout<<node<<" ";
			// search for an adjacent node which is not visited
			for(auto neighbour:adjList[node]){
				if(!visited[neighbour]){
					dfsHelper(neighbour,visited);
				}
			}
		}
		void dfs(T src){
			map<T,bool> visited;
			int component=1;
			dfsHelper(src,visited);
			cout<<endl;
			// search for disconnected Graph
			for(auto i:adjList){
			    string city=i.first;
			    if(!visited[city]){
			        dfsHelper(city,visited);
			        component++;
			    }
			}
			cout<<endl;
			cout<<"Graph having "<<component<<" components"<<endl;
		}
};
int main(){
	Graph<string> g;
    g.addEdge("Amirtsar","Jaipur");
	g.addEdge("Amirtsar","Delhi");
	g.addEdge("Delhi","Jaipur");
	g.addEdge("Mumbai","Jaipur");
	g.addEdge("Mumbai","Bhopal");
	g.addEdge("Delhi","Bhopal");
	g.addEdge("Mumbai","Bangalore");
	g.addEdge("Agra","Delhi");
	g.addEdge("Adman","Nicobar");
	
	g.dfs("Amirtsar");
	
	return 0;
}
