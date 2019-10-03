#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back
#define mx 100000007
using namespace std;

int main()
{
    optimize;

    int n,d,e,ans;

    int dollar[]={0,1, 2, 5, 10, 20, 50, 100};
    int euro[]={0,5 , 10, 20, 50, 100, 200 };

    cin>>n>>d>>e;

    while(1){
    ans = n;
    int it=0;

    for(int i = 0;i<8;i++){
        for(int j = 0;j<7;j++){
            int xx = d*dollar[i] + e*euro[j];

            if(xx<=n){
                    it++;
                if(n-xx<ans)
                    ans = n-xx;
            }
        }
    }

        n = ans;

        if(it==0 )
            break;

    }

    cout<<ans<<endl;


}
