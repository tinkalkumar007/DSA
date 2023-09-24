#include<iostream>
#include<unordered_map>
using namespace std;
#define hashmap unordered_map<char, node*>;
class node{
public:
    char data;
    hashmap h;
    bool isTerminal;
    // constructor
    node(char d){
        data=d;
        isTerminal=false;
    }
};
class Trie{
    node*root;
public:
    Trie(){
        root=new node('\0');
    }
    //insertion
    void addWord(char *word){
        node*temp=root;
        for(int i=0;word[i]!='\0';i++){
            char ch=word[i];
            
            if(temp->h.count(ch)){
                temp=temp->h[ch];
            }
            else{
                node*child=new node(ch);
                temp->h[ch]=child;
                temp=child;
            }
        }
        temp->isTerminal=true;
    }
    
    // lookup
    bool search(node* word){
        node8temp=root;
        for(int i=0;word[i]!=0;i++){
            char ch=word[i];
            if(temp->h.count(ch)==0){
                return false;
            }
            else{
                temp=temp->h[ch];
            }
        }
        return temp->isTerminal;
    }
    
    
};

int main(){
    char word[10][100]={"apple","ape","coder","coding blocks","no","not"};
    Trie t;
    for(int i=0;i<6;i++){
        t.addWord(word[i]);
    }
    char searchWord[100];
    cin.getline(searchWord,100);
    if(t.search(searchWord)){
        cout<<searchWord<<" Found "<<endl;
    }
    else{
        cout<<"Word not Found!"<<endl;
    }
    return 0;
}
