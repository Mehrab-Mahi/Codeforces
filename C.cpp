#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

vector<int>ad[100005],path,level[100005];
int vis[100005],dist[100005];
int p[100005];
int d[100005];

int bfs(int s){

    queue<int>q;
    q.push(s);
    vis[s] = 1;
    dist[s] = 0;
    p[s] = s;


    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int i = 0; i<ad[u].size(); i++){
            int v = ad[u][i];

            if(vis[v]==0){
                q.push(v);
                vis[v] = 1;
                dist[v] = dist[u]+1;
                d[v] = d[u]+1;
                level[dist[v]].pb(v);
                p[v] = u;
            }
        }
    }

}


int main(){

    int t,n,e,a,s=1;
    cin>>t;
    while(t--){
    cin>>n;
    int b[n+1];


   for(int i = 1;i<=n;i++){
        cin>>b[i];
    }

    for(int i = 0;i<n-1;i++){
        cin>>a;
        ad[a].pb(i+2);
    }

    for(int i = 2;i<=n;i++){
        ll f = 0;

        for(int j = 1;j<i;j++){
            if(f<b[j])
                f = b[j];
        }
        cout<<f<<endl;
    }

    }


}
