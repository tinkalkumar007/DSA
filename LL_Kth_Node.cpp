#include<iostream>
using namespace std;
class node{
public:
	int data;
	node* next;
	// constructor
	node(int d){
		data=d;
		next=NULL;
	}
};/*
class LinkedList{
	node*head;
	node*tail;
public:
	LinkedList(){
		head=NULL;
		tail=NULL;
	}
};*/
// take head by reference 
void insertAthead(node*&head,int data){
		node*n= new node(data);
		n->next=head;
		head=n;
    }
int length(node*head){
	int len=0;
	while(head!=NULL){
		head=head->next;
		len+=1;
	}
	return len;
}
void insertAttail(node*&head,int data){
	if(head==NULL){
		head=new node(data);
		return;
	}
	node*tail=head;
	while(tail->next!=NULL){
		tail=tail->next;
	}
	tail->next=new node(data);
	return;
}
void insertAtmid(node*&head,int data,int p){
	if(head==NULL||p==0){
		insertAthead(head,data);
		return;
	}
	else if(p>length(head)){
		insertAttail(head,data);
		return;
	}
	else{
		int jump=1;
		node*temp=head;
		while(jump<=(p-1)){
			temp=temp->next;
			jump+=1;
		}
		node*n=new node(data);
		n->next=temp->next;
		temp->next=n;
	}
}
// Delete a node
void nodeDel(node*&head, int p){
	node*temp=head;
	int len=1;
	while(len<(p-1)){
		temp=temp->next;
		len+=1;
	}
	node*last=temp->next;
	last=last->next;
	temp->next=last;
	return;
}
// pass head by value
void print(node*head){
	while(head!=NULL){
		cout<<head->data<<"->";
		head=head->next;
	}
	cout<<endl;
}
// make a input function to take input from user
void takeInput(node*&head){
	int data;
	cin>>data;
	while(data!=-1){
		insertAttail(head,data);
		cin>>data;
	}
}
node* findKthNode(node*head,int k){
	int len=length(head);
	node*temp=head;
	int n=len-k;
	while(n>0){
		temp=temp->next;
		n--;
	}	
	return temp;
}
// Runner up technique to finnd Kth node from end.

node* runKthnode(node*&head,int k){
	// take slow and fast node start from head
	node*slow=head;
	node*fast=head;
	while(k>0){
		fast=fast->next;
		k--;
	}
	while(fast!=NULL){
		fast=fast->next;
		slow=slow->next;
	}
	return slow;
}
int main(){
	node*head=NULL;
	takeInput(head);
	print(head);
	
	
	
	head=findKthNode(head,3);
	cout<<head->data<<endl;
	
	
	// this is from runner up technique;
	head=runKthnode(head,3);
	cout<<head->data<<endl;
	
	
	return 0;
}
