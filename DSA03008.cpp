#include<bits/stdc++.h>
using namespace std;
struct p{
	int a,b;
};
bool cmp(p x,p y){
	if(x.b==y.b){
		return x.a<y.a;
	}
	return x.b<y.b;
}
void solve(){
	int n;cin >> n;
	p a[n];
	for(int i=0;i<n;i++){
		cin >> a[i].a;
	}
	for(int i=0;i<n;i++){
		cin >> a[i].b;
	}
	sort(a,a+n,cmp);
	int cnt=1,bound=a[0].b;
	for(int i=1;i<n;i++){
		if(a[i].a>=bound){
			cnt++;
			bound=a[i].b;
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
