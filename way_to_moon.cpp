#include<iostream>
#include<list>
using namespace std;
class Graph{
	int V;
	list<int> *l;
	public:
		Graph(int v){
			V=v;
			l= new list<int>[V];
		}
		void addEdge(int u,int v){
			l[u].push_back(v);
			l[v].push_back(u);
		}
		void dfsHelper(int u,bool *visited,int &city_size){
			visited[u]=true;
			city_size++;
			for(auto neighbour:l[u]){
				if(!visited[neighbour]){			
					dfsHelper(neighbour,visited,city_size);
				}
			}
		}
		int dfsMoon(){
			bool *visited=new bool[V];
			for(int i=0;i<V;i++){
				visited[i]=false;
			}
			int n=V;
			int total_ways=n*(n-1)/2;
			for(int i=0;i<V;i++){
				if(!visited[i]){
					int city_size=0;
					dfsHelper(i,visited,city_size);
					total_ways-=city_size*(city_size-1)/2;
				}
			}
			return total_ways;
		}
};
int main(){
	Graph g(5);
	g.addEdge(0,1);
	g.addEdge(2,3);
	g.addEdge(0,4);
	
	cout<<g.dfsMoon()<<endl;
	
	return 0;
}
