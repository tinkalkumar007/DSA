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
node *buildTreeTrav(int *in,int *pre,int s,int e){
	static int i=0;
	// base case
	if(s>e){
		return NULL;
	}
	// rec case
	node*root=new node(pre[i]);
	int index=-1;
	for(int j=s;s<=e;j++){
		if(in[j]==pre[i]){
			index=j;
			break;
		}
	}
	i++;
	root->left=buildTreeTrav(in,pre,s,index-1);
	root->right=buildTreeTrav(in,pre,index+1,e);
	return root;
}

int main(){
	int a[8]={1,2,3,4,5,6,7,8};
	node*root=buildTreeArray(a,0,7);
	bfs(root);
	int in[]={3,2,8,4,1,6,7,5};
	int pre[]={1,2,3,4,8,5,6,7};
	int n=sizeof(in)/sizeof(int);
	//cout<<n<<endl;
	node* root1=buildTreeTrav(in,pre,0,n-1);
	bfs(root1);
	
	return 0;
}
