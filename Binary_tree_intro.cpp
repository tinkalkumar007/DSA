#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node*left;
		node*right;
		// constructor
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
	node* root=new node(d);
    root->left=buildTree();
	root->right=buildTree();
	
	return root;
}
void print(node*root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	print(root->left);
	print(root->right);	
}
void printIn(node*root){
	if(root==NULL){
		return;
	}
	printIn(root->left);
	cout<<root->data<<" ";
	printIn(root->right);
}
void printPost(node*root){
	if(root==NULL){
		return;
	}
	printPost(root->left);
	printPost(root->right);
	cout<<root->data<<" ";
}
int length(node*root){
	if(root==NULL){
		return 0;
	}
	int ls=length(root->left);
	int rs=length(root->right);
	return max(ls,rs)+1;
}
void printKthNode(node*root,int k){
	if(root==NULL){
		return;
	}
	if(k==1){
		cout<<root->data<<" ";
		return;
	}
	printKthNode(root->left,k-1);
	printKthNode(root->right,k-1);
	return;
}
void printAllRoot(node*root){
	int len=length(root);
	for(int i=1;i<=len;i++){
		printKthNode(root,i);
		cout<<endl;
	}
	return;
}
/*
void printRoot(node*root){
	cout<<root->data<<" ";
	printPost(root->left);
	printPost(root->right);
	if(root==NULL){
		return;
	}
	//cout<<root->data<<" ";
}*/
int main(){
	node*root=buildTree();
	/*
	print(root);
	cout<<endl;
	printIn(root);
	cout<<endl;
	printPost(root);
	cout<<endl;
	printRoot(root);*/
	cout<<length(root)<<endl;
	printAllRoot(root);
	
	return 0;
}
