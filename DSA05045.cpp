#include<bits/stdc++.h>
using namespace std;
struct obj{
	float weight,prof;
};
bool cmp(obj a,obj b){
	return (a.prof/a.weight) > (b.prof/b.weight);
}
void solve(){
	int n;float k;cin >> n >> k;
	obj a[n];
	for(int i=0;i<n;i++){
		cin >> a[i].prof >> a[i].weight;
	}
	sort(a,a+n,cmp);
	float ans=0;
	for(int i=0;i<n;i++){
		if(k>=a[i].weight){
			k-=a[i].weight;
			ans+=a[i].prof;
		}
		else{
			ans+=(a[i].prof*k)/a[i].weight;
			break;
		}
	}
	cout << fixed << setprecision(2) << ans << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
