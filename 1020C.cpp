#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int voter[3001];

int main()
{
    optimize;

    int n,m,a,b,vote=0;

    vector<int>v[3001]

    cin>>n>>m;

    ll c[n+1],s1=0,s2=0;

    for(int i = 1;i<=n;i++){
        cin>>a>>c[i];
        voter[a]++;
        v[a].pb(c[i]);
        if(a==1)
            c[i]=0;
    }

    sort(c,c+n+1);

    for(int i = 1;i<=m;i++){
        if(voter[i]>vote)
            vote = voter[i];
    }

    if(vote==voter[1]){
        int xx = 0;
        if(m==1){
            cout<<0<<endl;
            return 0;
        }
        else{
            for(int i = 2; i<=m ;i++){
                if(vote==voter[i]){
                    xx++;
                    break;
                }
            }

            if(xx==0){
                cout<<0<<endl;
            }
            else{
                for(int i = 1;i<=n;i++){
                    if(c[i]!=0){
                        cout<<c[i]<<endl;
                        return 0;
                    }
                }
            }
        }
    }
    else{
        int x = abs(vote-voter[1]);
    }

}

