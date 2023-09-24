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
    // insert
    void addWord(T u,T v,bool bidir=true){
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
};
int main(){
    Graph<string> g;
    g.addWord("Putin","Trump",false);
    g.addWord("Putin","Modi",false);
    g.addWord("Putin","Pope",false);
    g.addWord("Modi","Trump",true);
    g.addWord("Modi","Yogi",true);
    g.addWord("Yogi","Prabhu",false);
    g.addWord("Prabhu","Modi",false);
    
    g.print();
    
    Graph<int> g2;
    cout<<endl;
    g2.addWord(1,2);
    g2.addWord(3,2);
    g2.addWord(4,3);
    
    g2.print();
    
    return 0;
}
