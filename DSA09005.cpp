#include<bits/stdc++.h>
using namespace std;
void bfs(int u,int n,bool visited[],int a[][1001]){
	queue<int> q;
	q.push(u);visited[u]=true;
	while(!q.empty()){
		int tmp=q.front();q.pop();
		cout << tmp << " ";
		for(int i=1;i<=n;i++){
			if(!visited[i]&&a[tmp][i]){
				visited[i]=true;
				q.push(i);
			}
		}
	}
}
void solve(){
	int n,s,u;cin >> n >> s >> u;
	int a[n+1][1001];
	bool f[n+1];
	memset(a,0,sizeof(a));
	memset(f,false,sizeof(f));
	while(s--){
		int i,j;cin >> i >> j;
		a[i][j]=a[j][i]=1;
	}
	bfs(u,n,f,a);
	cout << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
