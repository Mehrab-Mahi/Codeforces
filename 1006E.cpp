#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

vector<int>ad[200100],v[200100];
int p[200100];


int bfs(int s){

    queue<int>q;
    q.push(s);
    vis[s] = 1;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int i = 0; i<ad[u].size(); i++){
            int v = ad[u][i];

            if(vis[v]==0){
                q.push(v);
                vis[v] = 1;
            }
        }
    }

}


int main()
{
    optimize;

    int n,q,a,b;

    cin>>n>>q;

    for(int i = 0 ; i<n;i++){
        cin>>a;

        ad[i+2].pb(a);
        ad[a].pb(i+2);
    }

    bfs(1);

    for()

    while(q--){
        cin>>a>>b;

        for(int )
    }

}

