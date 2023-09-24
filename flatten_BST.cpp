#include<iostream>
#include<queue>
#include<climits>
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
node*buildTree(){
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
class linkedList{
	public:
		node*head;
		node*tail;
};
linkedList flatten(node*root){
	linkedList l;
	if(root==NULL){
		l.head=l.tail=NULL;
		return l;
	}
	// leaf node
	if(root->right==NULL&&root->left==NULL){
		l.head=l.tail=root;
		return l;
	}
	// left is not null
	if(root->left!=NULL&&root->right==NULL){
		linkedList leftLL=flatten(root->left);
		leftLL.tail->right=root;
		
		l.head=leftLL.head;
		l.tail=root;
		return l;
	}
	// right is not NULL
	if(root->right!=NULL&&root->left==NULL){
		linkedList rightLL=flatten(root->right);
		root->right=rightLL.head;
		
		l.head=root;
		l.tail=rightLL.tail;
		return l;
	}
	// if both the sides are not null
	linkedList leftLL=flatten(root->left);
	linkedList rightLL=flatten(root->right);
	
	leftLL.tail->right=root;
	root->right =rightLL.head;
	
	l.head=leftLL.head;
	l.tail=rightLL.tail;
	
	return l;
	
}
bool checkForBST(node*root,int minV=INT_MIN,int maxV=INT_MAX){
	if(root==NULL){
		return true;
	}
	if(root->data>=minV &&root->data<=maxV&&checkForBST(root->left,minV,root->data)&&checkForBST(root->right,root->data,maxV)){
		return true;
	}
	return false;
}
int main(){
	node*root=buildTree();
	bfs(root);
	cout<<endl;
	/*if(checkForBST(root)){
		cout<<"BST"<<endl;
	}
	else{
		cout<<"Not A BST"<<endl;
	}*/
	linkedList l=flatten(root);
	node*temp= l.head;
	while(temp!=NULL){
		cout<<temp->data<<" --> ";
		temp=temp->right;
	}
	cout<<endl;
	return 0;
}
