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
    void print(){
        for(auto i: adjList){
            cout<<i.first<<"->";
            for(auto entery: i.second){
                cout<<entery<<",";
            }
            cout<<endl;
        }
    }
    void bfs(T src){
        queue<T> Q;
        map<T, bool> visited;
        
        Q.push(src);
        visited[src]=true;
        while(!Q.empty()){
            T node=Q.front();
            cout<<node<<" ";
            Q.pop();
            for(auto nbr: adjList[node]){
                if(!visited[nbr]){
                    Q.push(nbr);
                    visited[nbr]=true;
                }
            }
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
