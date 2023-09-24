// design a stack which can do pop(),push(),findMiddle(),deleteMiddle(),newMiddle() in O(1);
// can you do this with array.?
// No, you can't as delete operation will not be efficient;
// can you use linked list.?
// yes,you can do this with linked list when add new element move mid forward and when delete move mid pointer backward
// moving backward is not efficient in singly linked list so, we will use doubly linked list; 
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};
class Solution{
    public:
    Node* head=NULL;
    Node* mid=NULL;
    Node* temp=NULL;
    int i=0;
    void push(int x){
        i++;
        if(head==NULL){
            head=new Node(x);
            temp=head;
            mid=head;
        }
        else{
            Node* p=temp;
            temp->next=new Node(x);
            temp=temp->next;
            temp->prev=p;
        }
        if(i%2==0){
            mid=mid->next;
        }
        return;
    }
    int top(){
        return temp->data;
    }
    void pop(){
        if(i%2==0){
            mid=mid->prev;
            i--;
        }
        temp=temp->prev;
        temp->next=NULL;
        return;
    }
    int findMiddle(){
        if(i==1) return -1;
        return mid->data;
    }
    void deleteMiddle(){
        Node* p=(i%2==0) ? mid->prev:mid->next;
        mid->prev->next=mid->next;
        mid->next->prev=mid->prev;
        delete mid;
        mid=p;
        i--;
        return;
    }
};
int main(){
    Solution ob;
    ob.push(1);
    ob.push(2);
    ob.push(3);
    cout<<ob.findMiddle()<<endl;
    ob.deleteMiddle();
    cout<<ob.findMiddle()<<endl;
    return 0;
}