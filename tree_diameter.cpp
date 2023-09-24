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
int height(node*root){
	if(root==NULL){
		return 0;
	}
	int ls=height(root->left);
	int rs=height(root->right);
	return max(ls,rs)+1;
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
// Diameter of tree
int diameter(node*root){
	if(root==NULL){
		return 0;
	}
	int h1=height(root->left);
	int h2=height(root->right);
	int h=h1+h2;
	int op1=diameter(root->left);
	int op2=diameter(root->right);
	return max(h,max(op1,op2));
}
class Pair{
	public:
		int height;
		int dia;
};

Pair fastDia(node*root){
	Pair p;
	if(root==NULL){
		p.height=p.dia=0;
		return p;
	}
	Pair left=fastDia(root->left);
	Pair right=fastDia(root->right);
	
	p.height=max(left.height,right.height)+1;
	p.dia=max(left.height+right.height,max(left.dia,right.dia));
	
	return p;
}
int replaceRoot(node*root){
	if(root==NULL){
		return 0;
	}
	if(root->left==NULL&&root->right==NULL){
		return root->data;
	}
	// rec call
	int leftSum=replaceRoot(root->left);
	int rightSum=replaceRoot(root->right);
	int temp=root->data;
	root->data=leftSum+rightSum;
	return temp+root->data;
}
int main(){
	node*root=buildTree();
	bfs(root);
	/*cout<<countNode(root)<<endl;
	cout<<sumNodeData(root)<<endl;
	cout<<diameter(root)<<endl;
	Pair p=fastDia(root);
	cout<<p.height<<endl;
	cout<<p.dia<<endl;*/
	cout<<replaceRoot(root)<<endl;
	cout<<endl;
	bfs(root);
	
	return 0;
}
