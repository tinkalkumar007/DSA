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
		bool isCyclic(T src){
		    queue<T> q;
		    map<T,bool> visited;
		    map<T,int >parent;
		    q.push(src);
		    visited[src]=true;
		    parent[src]=src;
		    while(!q.empty()){
		        T node=q.front();
		        q.pop();
		        for(auto it: adjList[node]){
		            if(visited[it]==true&&parent[node]!=it){
		                return true;
		            }
		            else if(!visited[it]){
		                visited[it]=true;
		                q.push(it);
		                parent[it]=node;
		            }
		        }
		    }
		    return false;
		}
};
int main(){
	Graph<int> g;
	g.addEdge(1,2);
	g.addEdge(1,4);
	g.addEdge(2,3);
	g.addEdge(4,3);
	
	if(g.isCyclic(1)){
	    cout<<"Cyclic Graph!"<<endl;
	}
	else{
	    cout<<"Not a Cyclic Graph!"<<endl;
	}
	
	return 0;
}
