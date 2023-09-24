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
    Node* findLCA(Node* root,int a,int b){
        if(root==NULL){
            return NULL;
        }
        if(root->val==a||root->val==b){
            return root;
        }
        Node* leftLCA=findLCA(root->left,a,b);
        Node* rightLCA=findLCA(root->right,a,b);
        if(leftLCA && rightLCA){
            return root;
        }
        if(leftLCA!=NULL){
            return leftLCA;
        }
        return rightLCA;
    }
    int height(Node*root,int lca,int &ans,int k){
        if(root==NULL){
            return 0;
        }
        if(root->val==lca){
            return 1;
        }
        int l=height(root->left,lca,ans,k);
        int r=height(root->right,lca,ans,k);
        if(l==k-1||r==k-1){
            ans=root->val;
        }
        if(l||r){
            return 1+max(l,r);
        }
        return 1+max(l,r);
    }
    int findKthAncestor(Node* root,int a,int b,int k){
        Node* lca=findLCA(root,a,b);
        if(k==1)return lca->val;
        int ans=-1;
        int h=height(root,lca->val,ans,k);
        return ans;
    }
};

int main(){
    Node* root=buildTree();
    //print(root);
    Solution ob;
    int a,b,k;
    cin>>a>>b>>k;
    int ans=ob.findKthAncestor(root,a,b,k);
    cout<<ans<<endl;
    return 0;
}