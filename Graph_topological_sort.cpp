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
		void dfsHelper(T node, map<T,bool> &visited,list<T> &ordering){
			// mark the node as visited
			visited[node]=true;
			// search for an adjacent node which is not visited
			for(auto neighbour:adjList[node]){
				if(!visited[neighbour]){
					dfsHelper(neighbour,visited,ordering);
				}
			}
			ordering.push_front(node);
		}
		void dfsTopologicalSort(){
			map<T,bool> visited;
			list<T> ordering;
			// search for disconnected Graph
			for(auto i:adjList){
			    T node=i.first;
			    if(!visited[node]){
			        dfsHelper(node,visited,ordering);
			    }
			}
			for(T elements:ordering){
			    cout<<elements<<"-->";
			}
		}
};
int main(){
	Graph<string> g;
    g.addEdge("English","Programming Logic",false);
	g.addEdge("Maths","Programming Logic",false);
	g.addEdge("Programming Logic","HTML",false);
	g.addEdge("Programming Logic","Java",false);
	g.addEdge("Programming Logic","Python",false);
	g.addEdge("Programming Logic","JS",false);
	g.addEdge("Python","Web Dev",false);
	g.addEdge("HTML","CSS",false);
	g.addEdge("CSS","JS",false);
	g.addEdge("JS","Web Dev",false);
	g.addEdge("Java","Web Dev",false);
	g.addEdge("Python","Web Dev",false);
	
	g.dfsTopologicalSort();
	
	
	return 0;
}
