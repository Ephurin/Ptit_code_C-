#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	int a[n],b[n],cnt=1;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	b[0]=a[0];
	cout << "Buoc 0: " << b[0] << endl;
	while(cnt<n){
		cout << "Buoc " << cnt << ": ";
		bool tmp=false;
		for(int j=0;j<cnt;j++){
			if(a[cnt]<b[j]){
				for(int k=cnt-1;k>=j;k--){
					b[k+1]=b[k];
				}
				b[j]=a[cnt];
				tmp=true;
				break;
			}
		}
		if(!tmp) b[cnt]=a[cnt];
		cnt++;
		for(int j=0;j<cnt;j++) cout << b[j] << " ";
		cout << endl;
	}
}
int main(){
	solve();
	return 0;
}
