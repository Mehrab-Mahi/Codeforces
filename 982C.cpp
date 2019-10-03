#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;
int vis[100005];
vector<int>v[100005];
int h = 0;
int dfs(int s){

    if(vis[s])
        return 0;

    vis[s] = 1;

    int node = 1;

    for(int i = 0;i<v[s].size();i++){

        if(vis[v[s][i]]==0){
            node = node + dfs(v[s][i]);
            //cout<<node<<endl;
        }
    }



    if(node%2==0)
        h++;

    return node;

}

int main()
{
    optimize;

    int n,x,y,s,sum = 0,m=0;

    cin>>n;


    for(int i = 0;i<n-1;i++){
        cin>>x>>y;

        v[x].pb(y);
        v[y].pb(x);
    }

    if(n & 1)
        cout<<-1<<endl;
    else{

        dfs(1);

        cout<<h-1<<endl;
    }

}
