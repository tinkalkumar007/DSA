#include<iostream>
#include<vector>
using namespace std;
class Heap{
	vector<int> v;
	bool minHeap;
	bool compare(int a,int b){
		if(minHeap){
			return a>b;
		}
		else{
			return a<b;
		}
	}
	void heapify(int i){
		int left=2*i;
		int right=2*i +1;
		int minIndex=i;
		if(left<v.size()&&compare(v[i],v[left])){
			//swap(v[i],v[left]);
			minIndex=left;
		}
		if(right<v.size()&&compare(v[minIndex],v[right])){
			minIndex=right;
		}
		if(minIndex!=i){
			swap(v[i],v[minIndex]);
			heapify(minIndex);
		}
	}
	public:
		Heap(bool type=true){
			minHeap=type;
			v.push_back(-1);
		}
		void push(int d){
			v.push_back(d);
			int index=v.size()-1;
			int parent=index/2;
			while(index>1&&compare(v[parent],v[index])){
				swap(v[parent],v[index]);
				index=parent;
				parent=parent/2;
			}
		}
		void pop(){
			swap(v[1],v[v.size()-1]);
			v.pop_back();
			heapify(1);
		}
		int top(){
			return v[1];
		}
		bool empty(){
			return v.size()==1;
		}
};
int main(){
	Heap h(true);
	h.push(100);
	h.push(25);
	h.push(30);
	h.push(12);
	h.push(3);
	h.push(7);
	
	int k;
	cout<<"Enter the value of k: "<<endl;
	cin>>k;
	cout<<"Value less than "<<k<<" in binary heap are: "<<endl;
	while(!h.empty()){
		if(h.top()<=k){
			cout<<h.top()<<" ";
			h.pop();
		}
		else{
			break;
		}
	}
	
	return 0;
}
