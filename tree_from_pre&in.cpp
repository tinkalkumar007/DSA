#include<iostream>
#include<algorithm>
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
	queue<node*> Q;
	if(root==NULL){
		return;
	}
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
node* buildPreIn(int *pre,int *in,int s,int e){
	if(s>e){
		return NULL;
	}
	static int i=0;
	node*root=new node(pre[i]);
	int index=-1;
	for(int j=0;s<=e;j++){
		if(in[j]==pre[i]){
			index=j;
			break;
		}
	}
	i++;
	root->left=buildPreIn(pre,in,s,index-1);
	root->right=buildPreIn(pre,in,index+1,e);
	
	return root;
}
int main(){
	/*node*root=buildTree();
	bfs(root);
	cout<<endl;
	cout<<endl;*/
	int n;
	cin>>n;
	int pre[n];
	int in[n];
	for(int i=0;i<n;i++){
		cin>>pre[i];
		in[i]=pre[i];
	}
	sort(in,in+n);
	
	node*root1=buildPreIn(pre,in,0,n-1);
	bfs(root1);
	return 0;
}
