#include<iostream>
using namespace std;
class node{
public:// objects inside public are acccessble
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
		n -> next=head;
		head=n;
}
/*void insertAtmid(node*&mid,int data){
	node* m=new node(data);
	m->next=n->next;
	n->next=m;
}	*/
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
	//insertAtmid(mid,2);
	print(head);
	
	return 0;
}
