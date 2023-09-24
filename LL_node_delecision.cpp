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
};
/*class LinkedList{
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
// Delecision of head node
void headDel(node*&head){
	if(head==NULL){
		return;
	}
	node*temp=head;
	head=head->next;
	delete temp;// delete will release space.
}
// delecision of tail node
void tailDel(node*&head){
	node*temp=head;
	int k=length(head);
	while(k>2){
		temp=temp->next;
		k--;
	}
	node*last=temp->next;
	last=last->next;
	temp->next=last;
	delete last;	
}
// Delecision of a node at any position p
void nodeDel(node*&head, int p){
	if(p==1){
		headDel(head);
		return;
	}
	else if(length(head)==p){
		tailDel(head);
		return;
	}
	else{
		node*temp=head;
	    int len=1;
	    while(len<(p-1)){
		    temp=temp->next;
		    len+=1;
	    }
	    node*last=temp->next;
	    last=last->next;
	    temp->next=last;
	    //delete last;
	}
}
// pass head by value and print all the nodes
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
	nodeDel(head,3);
	headDel(head);
	tailDel(head);
	print(head);
	
	return 0;
}
