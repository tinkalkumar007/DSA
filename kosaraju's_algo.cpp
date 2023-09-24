#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Graph{
	map<T,list<T> >m;
	map<T,list<T> >m1;
	public:
		Graph(){
		
    	}
    	void addEdge(T u,T v,bool bidir){
    		m[u].push_back(v);
    		if(bidir){
    			m[v].push_back(u);
			}
    		
		}
		void reverseEdge(){
		    for(auto i:m){
		        T u=i.first;
		        for(auto v:m[u]){
		            m1[v].push_back(u);
		        }
		    }
		}
		bool scgHelper(T node,map<T,bool> &visited){
		    visited[node]=true;
		    for(auto children:m[node]){
		        if(!visited[children]){
		            scgHelper(children,visited);
		        }
		    }
		    for(auto check:m){
		        if(!visited[check.first]){
		            return false;
		        }
		    }
		    return true;
		}
		bool scgHelper1(T node,map<T,bool> &visited1){
		    visited1[node]=true;
		    for(auto children:m1[node]){
		        if(!visited1[children]){
		            scgHelper1(children,visited1);
		        }
		    }
		    for(auto check:m1){
		        if(!visited1[check.first]){
		            return false;
		        }
		    }
		    return true;
		}
		bool scg(T src){
			map<T,bool> visited;
			map<T,bool> visited1;
			for(auto i:m){
			    visited[i.first]=false;
			}
			bool before= scgHelper(src,visited);
			reverseEdge();
			for(auto i:m1){
			    visited1[i.first]=false;
			}
			if(before&&scgHelper1(src,visited1)){
			    return true;
			}
			else{
			    return false;
			}
		}		
};
int main(){
	Graph<int> g;
	g.addEdge(1,2,false);
	g.addEdge(2,3,false);
	g.addEdge(3,4,false);
	g.addEdge(4,1,false);
	g.addEdge(4,5,false);
	g.addEdge(5,6,false);
	g.addEdge(6,4,false);
	
	if(g.scg(1)){
	    cout<<"SCG"<<endl;
	}
	else{
	    cout<<"Not SCG!"<<endl;
	}
	
	return 0;
}
