#include<cstring>
#include<cmath>
using namespace std;
template<typename T>
class node{
	public:
		string key;
		T value;
		node<int>* next;
		node(string k,T v){
			key=k;
			value=v;
		}
		// recursive destructor call
		~node(){
	    	if(next!=NULL){
	     		delete next;
	    	}
     	}	
};
template<typename T>
class Hashtable{
	int cs;// Current size
	int ts;// Max arr size
	node<T>** buckets;// keep address of whole array
	
	int hashfunc(string key){
		int L=key.length();
		int p=1;
		int ans=0;
		for(int i=0;i<L;i++){
			ans+=key[L-i-1]*p;
			p=p*37;
			p%=ts;
			ans%=ts;
		}
		return ans;
	}
	
	
	public:
		Hashtable(int ds=7){
			cs=0;
			ts=ds;
			buckets=new node<T>*[ts];
			// make all addresses as NULL;
			for(int i=0;i<ts;i++){
	    		buckets[i]=NULL;
	     	}
		}
		int prime(int x){
			for(int i=x;i<2*x;i++){
				int y=sqrt(x);
				int z=0;
				for(int j=2;j<=y;j++){
					if(i%j==0){
						z+=1;
						break;
					}
				}
				if(z==0){
					return i;
					break;
				}
			}
		}
		// rehashing 
		void rehash(){
			int x=ts;
			ts=prime(2*ts);
			cs=0;
			node<T>** old_buckets=buckets;
			buckets=new node<T>*[ts];
			for(int i=0;i<ts;i++){
				buckets[i]=NULL;
			}
			for(int i=0;i<x;i++){
				node<T>*temp=old_buckets[i];
				if(temp!=NULL){
					while(temp!=NULL){
				     	insert(temp->key,temp->value);
				    	temp=temp->next;	 
			    	}
			    }
				delete old_buckets[i];
			}
			delete [] old_buckets;
			return;
		}
		// insertion
		void insert(string key,T value){
			// key i need k-index from hash fucntion;
			int i=hashfunc(key);
			node<T>* n=new node<T>(key,value);
			n->next=buckets[i];
			buckets[i]=n;
			
			cs++;
			float load_fact=(float)cs/ts;
			if(load_fact>=0.7){
				rehash();
				cout<<""<<endl;
			}
			
		}
		// print
		void print(){
			for(int i=0;i<ts;i++){
				cout<<"Bucket: "<<i<<"-> ";
				node<T>*temp=buckets[i];
				while(temp!=NULL){
					cout<<temp->key<<",";
					temp=temp->next;
				}
				cout<<endl;
			}
		}
		T* search(string k){
			int i=hashfunc(k);
			node<T>*temp=buckets[i];
			while(temp!=NULL){
				if(temp->key==k){
					return &(temp->value);
				}
				temp=temp->next;
			}
			return NULL;
		}
		void erase(string k){
			int i=hashfunc(k);
			node<T>* temp=buckets[i];
			if(temp->key==k&&temp->next==NULL){
				buckets[i]=NULL;
				delete temp;
				return;
			}
			else if(temp->key==k&&temp->next!=NULL){
				buckets[i]=temp->next;
				delete temp;
				return;
			}
			else{
				while(temp->next!=NULL){
					node<T>* C=temp;
					node<T>* N=temp->next;
					if(N->key==k){	
						C->next=N->next;
						delete N;
						return;
					}
					temp=temp->next;
				}
			}
			return;
		}				
};
