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
// Search for a value
bool search(node*&head,int n){
	node*temp=head;
	while(temp!=NULL){
		if(temp->data==n){
			return true;
			break;
		}
		else{
			temp=temp->next;
		}
	}
	return false;
}
// recursive method to search for an element
void recSrch(node*head,int n){
	// base case
	if(head==NULL){
		cout<<"Element not Present!"<<endl;
		return;
    } 
    if(head->data==n){
    	cout<<"Element is Present"<<endl;
    	return;
	}
	recSrch(head->next,n);	
}
// pass head by value
void print(node*head){
	while(head!=NULL){
		cout<<head->data<<"->";
		head=head->next;
	}
	cout<<endl;
}

int main(){
	node*head=NULL;
	insertAthead(head,5);
	insertAthead(head,4);	
	insertAthead(head,3);
	insertAthead(head,6);
	
	insertAttail(head,8);
	
	insertAtmid(head,2,2);
	print(head);
	//nodeDel(head,3);
	// search for a element itrative method
	int n;
	cin>>n;
	if(search(head,n)){
		cout<<"Element is present."<<endl;
	}
	else{
		cout<<"Element not present!"<<endl;
	}
	// search for a element recursive method
	recSrch(head,n);
	 
	return 0;
}
