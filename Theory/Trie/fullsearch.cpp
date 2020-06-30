#include <iostream>
using namespace std;

struct trie{
	trie* next[10];
	int length;
	int visited;
	bool end;
	trie(){
		for(int i=0;i<2;i++) next[i]=0;
		end=0;
		visited=0;
		length=0;
	}
} *root;

int n=100;


void insert(string s,int n){
	trie *cur=root;
	int id;
	for(int i=0;i<s.length();i++){
		id=s[i]-48;
		if(!cur->next[id])
			cur->next[id]=new trie();
		cur=cur->next[id];
		cur->visited++;
		cur->length=i+1;
	}
	cur->end=1;
}

int ans=n;

void search(trie* ff){
	trie *cur=ff;
	if(cur->visited==n){
		ans=max(ans,cur->length*n);
	} else return;
	for(int i=0;i<2;i++){
		if(cur->next[i]!=NULL){
			search(cur->next[i]);
		}
	}

}

void deltrie(trie* cur){
	for(int i=0;i<2;i++)
		if(cur->next[i])
			deltrie(cur->next[i]);
	delete cur;
}


int main(){
	freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);
	int t,T=1;cin>>t;
	while(t--){
		root = new trie();
		cin>>n;
		ans=n;
		while(n--){

			string tmp;cin>>tmp;
			insert(tmp,tmp.length());
		}
		search(root);
		cout<<ans<<endl;
		deltrie(root);	
	}
}