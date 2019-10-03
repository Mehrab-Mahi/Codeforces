#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,m=0,x;

    cin>>n;

    for(int i = 0;i<n;i++){
        cin>>x;

        if(x==1)
            m=1;
    }
    if(m==0)
        cout<<"EASY\n";
    else
        cout<<"HARD\n";

}
