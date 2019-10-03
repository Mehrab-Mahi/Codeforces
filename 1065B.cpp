#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,m,mn,mx,x=0;
    cin>>n>>m;

    if(m*2>=n)
        cout<<0;
    else
        cout<<n-(m*2);


    while((x*(x-1))/2<m)
        x++;

    cout<<" "<<n-x<<endl;

}
