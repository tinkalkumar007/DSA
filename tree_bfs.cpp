#include<iostream>
#include<queue>
using namespace std;
class node{
	public:
		int data;
		node*left;
		node*right;
		//constructor
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
void bfs(node*root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node* f=q.front();
		if(f==NULL){
			cout<<endl;
			q.pop();
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<f->data<<" ";
    		q.pop();
	    	if(f->left){
	    		q.push(f->left);
    		}
    		if(f->right){
    			q.push(f->right);
    		}			
		}	
	}
	return;	
}
int countNode(node*root){
	// Base Case
	if(root==NULL){
		return 0;
	}
	int ls=countNode(root->left);
	int rs=countNode(root->right);
	
	return ls+rs+1;	
}
int sumNodeData(node*root){
	// Base Case
	if(root==NULL){
		return 0;
	}
	int sl=sumNodeData(root->left);
	int sr=sumNodeData(root->right);
	return root->data+sl+sr;
}
int main(){
	node*root=buildTree();
	bfs(root);
	cout<<countNode(root)<<endl;
	cout<<sumNodeData(root)<<endl;
	return 0;
}
