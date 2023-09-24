#include<iostream>
using namespace std;
class node{
public:
	int data;
	node*next;
	// constructor 
	node(int d){
		data=d;
		next=NULL;
	}	
};
void insertAthead(node*&head,int data){
	node* n= new node(data);
	n->next=head;
	head=n;
}
void insertAttail(node*&head,int data){
	if(head==NULL){
		head= new node(data);
		return;
	}
	node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	node*n=new node(data);
	temp->next=n;
	return;
}
void takeInput(node*&head){
	int data;
	cin>>data;
	if(data==-1){
		return;
	}
	else{
		insertAttail(head,data);
		takeInput(head);
	}	
}
node* linkedList(node*a,node*b){
	if(a->next==NULL){
		return b;
	}
	if(b->next==NULL){
		return a;
	}
	node*c;
	if(a->data<b->data){
		c=a;
		c->next=linkedList(a->next,b);
	}
	else{
		c=b;
		c->next=linkedList(a,b->next);
	}
	return c;
}
bool findCycle(node*&head){
	node*slow=head;
	node*fast=head;
	while(fast!=NULL&&fast->next!=NULL){
		slow=slow->next;
		fast=fast->next-next;
		if(fast==slow){
			return true;
		}
	}
	return false;
}
void breakCycle(node*&head){
	node*fast=head;
	node*slow=head;
	while(fast!=NULL&fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast){
			slow=head;
			while(fast!=NULL&&fast->next!=NULL){
				node*p=fast;
				fast=fast->next;
				slow=slow->next;
				if(fast==slow){
					p->next=NULL;
				}
			}
		}
	}
}
void print(node*head){
	while(head!=NULL){
		cout<<head->data<<"->";
		head=head->next;
    }
    cout<<endl;
}
int main(){
	node*head=NULL;
	node*head2=NULL;
	takeInput(head);
	takeInput(head2);
	print(head);
	print(head2);
	head=linkedList(head,head2);
	print(head);
	return 0;
}
