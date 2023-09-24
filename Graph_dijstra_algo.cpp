#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Graph{
	unordered_map<T,list<pair<T,int> > > m;
	public:
		Graph(){
			
		}
		void addEdge(T u,T v,int dist,bool bidir=true){
			m[u].push_back(make_pair(v,dist));
			if(bidir){
				m[v].push_back(make_pair(u,dist));
			}
		}
		void printAdj(){
			for(auto i:m){
				cout<<i.first<<"-->";
				for(auto j:i.second){
					cout<<"("<<j.first<<","<<j.second<<")";
				}
				cout<<endl;
			}
		}
		void dijsktraSSSP(T src){
		    unordered_map<T,int> dist;
		    // set all dist to infinity
		    for(auto j:m){
		        dist[j.first]=INT_MAX;
		    }
		    // now we going to make a sort of node with minimum dist
		    set<pair<int,T> > s;
		    dist[src]=0;
		    s.insert(make_pair(dist[src],src));
		    while(!s.empty()){
		        // find the pair at front
		        auto p= *(s.begin());
		        int nodeDist=p.first;
		        
		        T node=p.second;
		        s.erase(s.begin());
		        // iterate over neighbour/children of current node
		        for(auto childPair: m[node]){
		            
		            if(childPair.second+nodeDist<dist[childPair.first]){
		                
		                // In set updation of a particular isn't possible
		                // we have to erase old set pair, and insert a new
		                T dest =childPair.first;
		                auto f=s.find(make_pair(dist[dest],dest));
		                if(f!=s.end()){
		                    s.erase(f);
		                }
		                
		                // insert new pair
		                dist[dest]=childPair.second+nodeDist;
		                s.insert(make_pair(dist[dest],dest));
		                
		            }
		        }
		    }
		    // lets print 
		    for(auto d:dist){
		        cout<<d.first<<" is loacted at a distance of "<<d.second<<endl;
		    }
		}
	
};
int main(){
	/*Graph<int> g;
	g.addEdge(1,2,1);
	g.addEdge(1,3,4);
	g.addEdge(2,3,4);
	g.addEdge(3,4,2);
	g.addEdge(1,4,7);
	
	//g.printAdj();
	g.dijsktraSSSP(1);
	*/
	Graph<string> India;
	India.addEdge("Amirtsar","Delhi",1);
	India.addEdge("Amirtsar","Jaipur",4);
	India.addEdge("Jaipur","Delhi",2);
	India.addEdge("Jaipur","Mumbai",8);
	India.addEdge("Bhopal","Agra",2);
	India.addEdge("Mumbai","Bhopal",3);
	India.addEdge("Agra","Delhi",1);
	//India.printAdj();
	India.dijsktraSSSP("Amirtsar");
	
	return 0;
}
