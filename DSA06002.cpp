#include<bits/stdc++.h>
using namespace std;
int x;
struct so{
	int a,b;
};
bool cmp(so a,so b){
	if(abs(x-a.a)==abs(x-b.a)) return a.b<b.b;
	return abs(x-a.a)<abs(x-b.a);
} 
void solve(){
	int n;cin >> n >> x;
	so a[n];
	for(int i=0;i<n;i++){
		cin >> a[i].a;
		a[i].b=i;
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		cout << a[i].a << " ";
	}
	cout << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
