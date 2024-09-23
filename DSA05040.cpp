#include<bits/stdc++.h>
using namespace std;
struct dem{
	int ac,dc;
};
bool cmp(dem a,dem b){
	return max(a.ac,a.dc)>max(b.ac,b.dc);
}
void solve(){
	int n;cin >> n;
	dem f[n];int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
		f[i].ac=1;f[i].dc=1;
		if(i>0){
			if(a[i]>a[i-1]) f[i].ac=f[i-1].ac+1;
			else if(a[i]<a[i-1]) f[i].dc=max(f[i-1].ac+1,f[i-1].dc+1);
		}
	}
	sort(f,f+n,cmp);
	cout << max(f[0].ac,f[0].dc) << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
