#include<iostream>
#include<stack>
#include<queue>
using namespace std;
class node{
	public:
		int data;
		node*left;
		node*right;
		// construcor
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
void BFS(node*&root,stack<int> &S){
	if(root==NULL){
		return;
    }
	queue<node*> Q;
	Q.push(root);
	S.push(root->data);
	Q.push(NULL);
	S.push(-1);
	//node*temp=root;
	while(!Q.empty()){
		node*temp=Q.front();
		if(temp==NULL){
			Q.pop();
			cout<<endl;
			if(!Q.empty()){
				Q.push(NULL);
				S.push(-1);
			}
		}
		else{
			cout<<temp->data<<" ";
			Q.pop();
			if(temp->left){
				Q.push(temp->left);
				S.push(temp->left->data);
			}
			if(temp->right){
				Q.push(temp->right);
				S.push(temp->right->data);
			}
		}
	}
	return;
}
void printReverse(stack<int> S){
	while(!S.empty()){
		if(S.top()==-1){
			S.pop();
			cout<<endl;
		}
		else{
			cout<<S.top()<<" ";
			S.pop();
		}
	}
	return;
}
int main(){
	stack<int> S;
	node* root=buildTree();
	BFS(root,S);
	cout<<endl;
	printReverse(S);
	return 0;
}
