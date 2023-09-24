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
    // insert
    void addEdge(T u,T v,bool bidir=true){
        adjList[u].push_back(v);
        if(bidir){
            adjList[v].push_back(u);
        }
    }
    // lookup
    void print(){
        for(auto it: adjList){
            cout<<it.first<<" -->";
            for(auto entery: it.second){
                cout<<entery<<",";
            }
            cout<<endl;
        }
    }
    void bfs(int src){
        queue<T> Q;
        map<T,int> dist;
        map<T,T> parent;
        for(auto i:adjList){
            dist[i.first]=INT_MAX;
        }
        Q.push(src);
        dist[src]=0;
        while(!Q.empty()){
            int node=Q.front();
            Q.pop();
            for(auto j :adjList[node]){
                if(!dist[j]){
                    Q.push(j);
                    dist[j]=dist[node]+1;
                    parent[j]=node;
                }
            }
        }
        for(auto i: adjList){
            T node=i.first;
            cout<<"Dist of "<<node<<" from "<<src<<" is "<<dist[node]<<endl;
        }
    }
};
int main(){
    Graph<int> g;
    g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(2,4);
	g.addEdge(3,4);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(3,5);
    
    g.bfs(0);
    
    
    return 0;
}
