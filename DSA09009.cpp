#include<bits/stdc++.h>
using namespace std;
vector<int> v[1001];
bool visited[1001];
void bfs(int u){
	queue<int> q;q.push(u);
	visited[u];
	while(!q.empty()){
		int tmp=q.front();q.pop();
		for(int i=0;i<v[tmp].size();i++){
		    if(!visited[v[tmp][i]]){
		    	q.push(v[tmp][i]);
		    	visited[v[tmp][i]]=true;
			}
	    }
	}
}
void solve(){
	int n,k;cin >> n >> k;
	for(int i=1;i<=n;i++){
		v[i].clear();
	}
	for(int i=0;i<k;i++){
		int a,b;cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int cnt=0;
	memset(visited,false,sizeof(visited));
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			cnt++;
			bfs(i);
		}
	}
	cout << cnt << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
