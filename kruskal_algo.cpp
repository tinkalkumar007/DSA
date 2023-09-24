#include<iostream>
#include<queue>
#include<map>
#include<bits/stdc++.h>
using namespace std;
class Graph{
	int V;
	list<pair<int,int> > *l;
	public:
		Graph(int v){
			V=v;
			l=new list<pair<int,int> >[V];
		}
		void addEdge(int u,int v,int cost,queue<int> &q,bool bidir=false){
			l[u].push_back(make_pair(v,cost));
			if(bidir){
				l[v].push_back(make_pair(u,cost));
			}
			q.push(cost);
		}
		
		bool kruskal(int x,bool *visited){
		    for(auto i=0;i<V;i++){
		        for(auto j:l[i]){
		            int cost=j.second;
		            if(cost==x){
		               int v=j.first;
		               int u=i;
		               if(visited[u]&&visited[v]){
		                   l[u].pop_back();
		                   return false;
		               }
		               if(!visited[u]){
		                   visited[u]=true;
		               }
		               if(!visited[v]){
		                   visited[v]=true;
		               }
		            }
		        }
		    }
		    return true;
		}
		void sortCost(int *a,queue<int> &q){
		    int i=0;
        	while(!q.empty()){
         	    a[i]=q.front();
        	    q.pop();
        	    i++;
        	}
         	sort(a,a+4);
         	bool *visited=new bool [V];
         	for(int i=0;i<V;i++){
         	    visited[i]=false;
         	}
        	for(int i=0;i<4;i++){
        	    kruskal(a[i],visited);
        	}
		}
		void print()
};
int main(){
	Graph g(4);
	int a[4];
	queue<int> q;
	g.addEdge(0,1,3,q);
	g.addEdge(0,2,5,q);
	g.addEdge(2,3,9,q);
	g.addEdge(1,3,7,q);
	
	g.sortCost(a,q);
	return 0;
}
