#include<iostream>
#include<queue>
using namespace std;
class node{
	public:
		int data;
		node*left;
		node*right;
		node(int d){
			data=d;
			left=NULL;
			right=NULL;
		}	
};
void bfs(node*root){
	queue<node*> Q;
	Q.push(root);
	Q.push(NULL);
	while(!Q.empty()){
		node*f=Q.front();
		if(f==NULL){
			cout<<endl;
			Q.pop();
			if(!Q.empty()){
				Q.push(NULL);
			}
		}
		else{
			cout<<f->data<<" ";
      		Q.pop();
     		if(f->left){
     			Q.push(f->left);
     		}
     		if(f->right){
      			Q.push(f->right);
    		}
		}			
	}
	return;
}
node* insertAtNode(node*root,int d){
	// base case
	if(root==NULL){
		return new node(d);
	}
	// rec case
	if(root->data>=d){
		root->left= insertAtNode(root->left,d);
	}
	else{
		root->right= insertAtNode(root->right,d);
	}
	return root;	
}
node* buildTreeBST(){
	int d;
	cin>>d;
	node*root=NULL;
	while(d!=-1){
		root=insertAtNode(root,d);
		cin>>d;
	}
	return root;
}
// inorder print 
void Inorder(node*root){
	if(root==NULL){
		return;
	}
	Inorder(root->left);
	cout<<root->data<<",";
	Inorder(root->right);
	return;
}
bool searchNode(node*root,int key){
	if(root==NULL){
		return false;
	}
	if(key>root->data){
		return searchNode(root->right,key);
	}
	else if(key<root->data){
		return searchNode(root->left,key);
	}
	return true;
}
int main(){
	node*root=buildTreeBST();
	Inorder(root);
	cout<<endl;
	bfs(root);
	cout<<endl;
	if(searchNode(root,9)){
		cout<<"Node is Present";
	}
	else{
		cout<<"Node not Present!";
	}
	return 0;
}
