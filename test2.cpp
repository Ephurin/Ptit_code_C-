#include<iostream>
#include<algorithm>
using namespace std;
int n,m=100000,id=0;
int a[50][50],h[50],res[50][50],used[50];
void result(){
    int cost=0;
    for(int i=1;i<=n;i++){
        cost+=a[i][h[i]];
    }
    if(cost<=m){
        m=cost;
        res[id][0]=m;
        for(int i=1;i<=n;i++){
            res[id][i]=h[i];
        }
        id++;
    }
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(!used[j]){
            used[j]=1;
            h[i]=j;
            if(i==n) result();
            else Try(i+1);
            used[j]=0;
        }
    }
}
int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        h[i]=i;
    }
    Try(1);
    for(int i=0;i<id;i++){
        if(res[i][0]==m){
            for(int j=1;j<=n;j++){
                cout << "Man" << j << "->" << "Job" << res[i][j] << " || ";
            }
            cout << endl;
        }
    }
}
