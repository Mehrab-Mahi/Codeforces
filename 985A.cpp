#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,s=0,t=0;

    cin>>n;

    int a[(n/2)];

    for(int i = 0;i<n/2;i++)
        cin>>a[i];

     sort(a,a+(n/2));
    int p = 2,q=1;
    for(int i = 0;i<n/2;i++){
        s =s + abs(p-a[i]);
        t = t + abs(q-a[i]);
        p = p+2;
        q=q+2;
    }

    if(s<t)
        cout<<s<<endl;
    else
        cout<<t<<endl;

}
