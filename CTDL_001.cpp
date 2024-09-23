#include<bits/stdc++.h>
using namespace std;
int n,a[100],isOK=1;
bool dx(int a[]){
	for(int i=1;i<=n/2;i++){
		if(a[i]!=a[n+1-i]) return false;
	}
	return true;
}
void begin(){
	for(int i=0;i<=n;i++){
		a[i]=0;
	}
}
void sinh(){
	int i=n;
	while(n>=1&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0) isOK=0;
	else a[i]=1;
}
int main(){
	cin >> n;
	begin();
	while(isOK){
		if(dx(a)){
			for(int i=1;i<=n;i++){
				cout << a[i] << " ";
			}
			cout << endl;
		}
		sinh();
	}
	return 0;
}
