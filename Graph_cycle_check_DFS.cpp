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
		bool isCyclicHelper(T node,map<T,bool> &visited,map<T,bool> &inStack){
		    // processing the current node as visited
		    visited[node]=true;
		    inStack[node]=true;
		    // Explore to the neighbour of node
		    for(auto neighbour: adjList[node]){
		        // here two things will happen
		        // node is not visited but is inStack && it's further branch is in Cyclic
		        if(!visited[neighbour]&&isCyclicHelper(neighbour,visited,inStack)||inStack[neighbour]){
		            return true;
		        }
		    }
		    // going to pop out make inStack = false
		    inStack[node]=false;
		    return false;
		}
		bool isCyclic(){
		    map<T,bool> visited;
		    map<T,bool > inStack;
		    for(auto it: adjList){
		        T node=it.first;
		        bool Cyclic=isCyclicHelper(node,visited,inStack);
		        if(Cyclic){
		            return true;
		        }
		    }
		    return false;
		}
};
int main(){
	Graph<int> g;
	g.addEdge(0,2,false);
	g.addEdge(0,1,false);
	g.addEdge(2,3,false);
	g.addEdge(2,4,false);
	g.addEdge(3,0,false);
	g.addEdge(4,5,false);
	g.addEdge(1,5,false);
	
	if(g.isCyclic()){
	    cout<<"Cyclic Graph!"<<endl;
	}
	else{
	    cout<<"Not a Cyclic Graph!"<<endl;
	}
	
	return 0;
}
