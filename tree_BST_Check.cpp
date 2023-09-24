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
	if(checkForBST(root)){
		cout<<"BST"<<endl;
	}
	else{
		cout<<"Not A BST"<<endl;
	}
	return 0;
}
