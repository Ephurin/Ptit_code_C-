#include<bits/stdc++.h>
using namespace std;
struct job{
	int id,dl,prof;
};
bool cmp(job a,job b){
	if(a.prof==b.prof) return a.dl<b.dl;
	return a.prof>b.prof;
}
void solve(){
	int n;cin >> n;
	job a[n];
	for(int i=0;i<n;i++){
		cin >> a[i].id >> a[i].dl >> a[i].prof;
	}
	sort(a,a+n,cmp);
	int time=0,prof=0;
	for(int i=0;i<n;i++){
		if(a[i].dl>time){
			time++;
			prof+=a[i].prof;
		}
	}
	cout << time << " " << prof << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
