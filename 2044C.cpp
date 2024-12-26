#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int t,m,a,b,c;

    cin>>t;

    while(t--){
        cin>>m>>a>>b>>c;

        int totalSeated = 0, remainForC = 0;

        if(a >= m){
            totalSeated = m;
        }
        else{
            totalSeated = a;
            remainForC = m - a;
        }

        if(b >= m){
            totalSeated += m;
        }
        else{
            totalSeated += b;
            remainForC += m - b;
        }

        if(remainForC >= c){
            totalSeated += c;
        }
        else{
            totalSeated += remainForC;
        }

        cout<<totalSeated<<endl;
    }
}


