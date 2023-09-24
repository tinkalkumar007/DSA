class Solution {
public:
    void permute(set<string>& v,string s,int i){
        // base case
        if(s[i]=='\0'){
            v.insert(s);
            return;
        }
        // rec case
        for(int j=i;s[j]!='\0';j++){
            swap(s[i],s[j]);
            permute(v,s,i+1);
            // backtracing
            swap(s[i],s[j]);
        }
        return;
    }
    string getPermutation(int n, int k) {
        string a[10]={"","1","12","123","1234","12345","123456","1234567","12345678","123456789"};
        set<string> v;
        permute(v,a[n],0);
        vector<string> v2;
        copy(v.begin(),v.end(),back_inserter(v2));
        return v2[k-1];
    }
};
int main(){
	Solution sol;
	int n,k;
	//set<string> v;
	cin>>n>>k;
	cout<<sol.getPermutation(n,k);
	
	return 0;
}
