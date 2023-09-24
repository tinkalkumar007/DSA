// Topological sort BFS approach
// Also called as KAHN's Algorithm
#include<iostream>
#include<map>
#include<list>
#include<queue>
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
				cout<<i.first<<"-->";
				for(auto entery:i.second){
					cout<<entery<<",";
				}
				cout<<endl;
			}
		}
		void dfsTopologicalSort(){
			map<T,bool> visited;
			queue<T> q;
			map<T,int> indegree;
			// init indegree of first vertex
			for(auto u:adjList){
			    // u having pair of lists
			    T node=u.first;
			    visited[node]=false;
			    indegree[node]=0;
			}
			// init indegree of every vertex
			for(auto i:adjList){
			    T node=i.first;
			    for(auto vertex:adjList[node]){
			        indegree[vertex]++;
			    }
			}
			// find out all the nodes having 0 indegree
			for(auto i:adjList){
			    T node=i.first;
			    if(indegree[node]==0){
			        q.push(node);
			    }
			}
			// now algo part
			while(!q.empty()){
			    T node=q.front();
			    cout<<node<<"-->";
			    q.pop();
			    for(auto neighbour: adjList[node]){
			        indegree[neighbour]--;
			        if(indegree[neighbour]==0){
			            q.push(neighbour);
			        }
			    }
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
	g.addEdge("HTML","CSS",false);
	g.addEdge("CSS","JS",false);
	g.addEdge("JS","Web Dev",false);
	g.addEdge("Java","Web Dev",false);
	g.addEdge("Python","Web Dev",false);
	
	g.dfsTopologicalSort();
	//g.print();
	
	return 0;
}
