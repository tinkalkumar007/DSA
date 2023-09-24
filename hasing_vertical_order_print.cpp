/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<map>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    // Constructor
    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
node* buildTree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    node*root=new node(d);
    root->left=buildTree();
    root->right=buildTree();
    
    return root;
}
// vertical order print
void vop(node*root,map<int,vector<int> > &m,int d=0){
    if(root==NULL){
        return;
    }
    m[d].push_back(root->data);
    vop(root->left,m,d-1);
    vop(root->right,m,d+1);
    return;
}
int main(){
    node*root=buildTree();
    
    map<int, vector<int> > m;
    vop(root,m);
    
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<"->";
        for(int j=0;j<it->second.size();j++){
            cout<<it->second[j]<<",";
        }
        cout<<endl;
    }

    return 0;
    
}
