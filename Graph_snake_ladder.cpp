#include<iostream>
#include<map>
#include<list>
#include<queue>
#include<limits>
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
    int bfs(int src,int dest){
        queue<T> Q;
        map<T,int> dist;
        map<T,T> parent;
        for(auto i:adjList){
            dist[i.first]=std::numeric_limits<int>::max();;
        }
        Q.push(src);
        dist[src]=0;
        while(!Q.empty()){
            int node=Q.front();
            //cout<<node<" ";
            Q.pop();
            for(auto j :adjList[node]){
                if(dist[j]==std::numeric_limits<int>::max()){
                    Q.push(j);
                    dist[j]= dist[node] +1;
                    parent[j]=node;
                }
            }
        }
        for(auto i: adjList){
            T node=i.first;
            cout<<"Dist of "<<node<<" is "<<dist[node]<<endl;
        }
        return dist[dest];
    }
};
int main(){
    Graph<int> g;
    int board[50]={0};
    /*board[2]=13;
    board[5]=2;
    board[9]=18;
    board[18]=11;
    board[17]=-13;
    board[20]=-14;
    board[24]=-8;
    board[25]=-10;
    board[32]=-2;
    board[34]=-22;*/
    board[21]=-13;
    board[13]=16;
    board[16]=10;

    // Board Graph
    for(int u=0;u<30;u++){
        //at every node you can throw a dice;
        for(int dice=1;dice<=6;dice++){
            int v=u+dice+board[u];
            g.addEdge(u,v,false);
        }
    }
    cout<<"The shortest path is "<<g.bfs(0,30)<<endl;
    
    
    return 0;
}
