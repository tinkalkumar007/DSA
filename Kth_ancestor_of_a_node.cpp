// driver code start{
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int data){
        val=data;
        left=NULL;
        right=NULL;
    }
};
Node* buildTree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    Node* root=new Node(d);
    root->left=buildTree();
    root->right=buildTree();
    return root;
}
void print(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->val<<" ";
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
    }
    return;
}
// driver code end}
class Solution{
    public:
    int findKthAncestor(Node*root,int a,int k,int &ans){
        if(root==NULL){
            return 0;
        }
        if(root->val==a){
            return 1;
        }
        int l=findKthAncestor(root->left,a,k,ans);
        int r=findKthAncestor(root->right,a,k,ans);
        if(l==k||r==k){
            ans=root->val;
        }
        if(l||r){
            return 1+max(l,r);
        }
        return max(l,r);
    }

};
int main(){
    Node* root=buildTree();
    //print(root);
    Solution ob;
    int a,k;
    cin>>a>>k;
    int ans=-1;
    ob.findKthAncestor(root,a,k,ans);
    cout<<ans<<endl;
    return 0;
}