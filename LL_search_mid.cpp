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
// search for mid
int searchMid(node*&head){
	int len=length(head);
	int a=len/2;
	node*temp=head;
	while(a>0){
		temp=temp->next;
		a--;
	}
	return temp->data;
}
// runner up technique for finding mid
node* findMid(node*head){
	// base case
	if(head->next==NULL||head->next->next==NULL){
		return head;
	}
	// rec case
	node* slow=head;
	node* fast=head->next;
	while(fast->next!=NULL&&fast->next->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;
	}
	return slow;
}
int main(){
	node*head=NULL;
	takeInput(head);
	print(head);
	cout<<searchMid(head)<<endl;
	head=findMid(head);
	cout<<head->data<<endl;
	
	return 0;
}
