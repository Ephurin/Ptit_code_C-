#include<bits/stdc++.h>
using namespace std;
vector<int> val[1001];
int parent[1001];
bool visited[1001];
void bfs(int u){
	queue<int> q;visited[u]=true;
	q.push(u);
	while(!q.empty()){
		int tmp=q.front();q.pop();
		for(int i=0;i<val[tmp].size();i++){
			if(!visited[val[tmp][i]]){
				visited[val[tmp][i]]=true;
				parent[val[tmp][i]]=tmp;
				q.push(val[tmp][i]);
			}
		}
	}
}
void path(int s,int t){
	memset(visited,false,sizeof(visited));
	memset(parent,0,sizeof(parent));
	bfs(s);
	if(!visited[t]){
		cout << -1 << endl;
	}
	else{
		vector<int> v;
		while(t!=s){
			v.push_back(t);
			t=parent[t];
		}
		v.push_back(s);
		reverse(v.begin(),v.end());
		for(int i=0;i<v.size();i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
}
void solve(){
	int n,s,a,b;cin >> n >> s >> a >> b;
	for(int i=1;i<=n;i++){
		val[i].clear();
	} 
	for(int i=0;i<s;i++){
		int x,y;cin >> x >> y;
		val[x].push_back(y);
	}
	path(a,b);
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
