#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],f[100],isOK=1,cnt=0;
void prep(){
	for(int i=0;i<=n;i++){
		f[i]=0;
	}
}
bool valid(int a[]){
	int tmp=0;
	for(int i=1;i<=n;i++){
		if(f[i]==1) tmp+=a[i];
	}
	if(tmp==k) return true;
	return false;
}
void sinh(){
	int i=n;
	while(i>=1&&f[i]==1){
		f[i]=0;
		i--;
	}
	if(i==0) isOK=0;
	else f[i]=1;
}
int main(){
	cin >> n >> k;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	prep();
	while(isOK){
		if(valid(a)){
			cnt++;
			for(int i=1;i<=n;i++){
				if(f[i]==1) cout << a[i] << " ";
			}
			cout << endl;
		}
		sinh();
	}
	cout << cnt;
	return 0;
}
