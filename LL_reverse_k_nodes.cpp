#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node*next;
		node(int d){
			data=d;
			next=NULL;
		}
};
void linkedList(node*&head,int d){
	if(head==NULL){
		head=new node(d);
		return;
	}
	node*n=new node(d);
	node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
	return;
}
void reverseKnodes(node*&head,int k){
	if(head==NULL||head->next==NULL){
		return;
	}
	int n=k;
	node*temp=head;
	while(k>1){
		temp=temp->next;
		k--;
	}
	node*p=temp->next;
	node*c=head;
	node*N;
	while(n>0){
		// save address of next node
		N=c->next;
		// point current node to the address of k+1th node
		c->next=p;
		// restore
		p=c;
		c=N;
		n--;
	}
	head=p;
	return;
}
void printLL(node*head){
	if(head==NULL||head->next==NULL){
		return;
	}
	node*temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"-->";
		temp=temp->next;
	}
	return;
}
int main(){
	node*head=NULL;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		linkedList(head,i);
	}
	printLL(head);
	cout<<endl;
	int k;
	cin>>k;
	reverseKnodes(head,k);
	//cout<<endl;
	printLL(head);
	return 0;
}
