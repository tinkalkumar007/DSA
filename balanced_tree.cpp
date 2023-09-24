#include<iostream>
#include<queue>
#include<cmath>
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
int h1=0,h2=0;
int balancedTree(node*root){
	if(root==NULL){
		return 0;
	}	
	h1=balancedTree(root->left);
   	h2=balancedTree(root->right);
   	if(abs(h1-h2)<=1){
		return -1;
	}
	return max(h1,h2)+1;
}
node* buildTreeArray(int *a,int s,int e){
	if(s>e){
		return NULL;
	}
	int mid=(s+e)/2;
	node*root=new node(a[mid]);
	root->left=buildTreeArray(a,s,mid-1);
	root->right=buildTreeArray(a,mid+1,e);
	
	return root;
}
int main(){
	node*root=buildTree();
	bfs(root);
	//cout<<countNode(root)<<endl;
	//cout<<sumNodeData(root)<<endl;
	//cout<<balancedTree(root)<<endl;
	int a[7]={1,2,3,4,5,6,7};
	node*root1=buildTreeArray(a,0,7);
	bfs(root1);
	return 0;
}
