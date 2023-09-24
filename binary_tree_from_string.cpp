#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int data){
        val=data;
        left=NULL;
        right=NULL;
    }
};
int partition(string s){
    int n=s.length();
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            count++;
        }
        else if(s[i]==')'){
            count--;
        }
        if(count==0){
            return i;
        }
    }
    return count;
}
Node* solve(string s){
    if(s.length()==0){
        return NULL;
    }
    if(s.length()==1){
        Node* temp=new Node(s[0]-'0');
        return temp;
    }
    Node* root=new Node(s[0]-'0');
    int part=partition(s.substr(1));
    root->left=solve(s.substr(2,part-1));
    if(part+3<s.length()) root->right=solve(s.substr(part+3,s.length()-part-4));
    return root;
}
void print(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    print(root->left);
    print(root->right);
    return;
}
void levelOrder(Node* root){
    if(root==NULL){
        return;
    }
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
int main(){
    string s;
    cin>>s;
    Node* ans=solve(s);
    //print(ans);
    levelOrder(ans);
    return 0;
}