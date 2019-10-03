#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

ll a[150],b[150],c[150];

int main()
{
    ll n;

    cin>>n;

    string s,t,u;

    cin>>s>>t>>u;

    ll l = s.size();

    for(int i = 0;i<l;i++){
        a[s[i]]++;
        b[t[i]]++;
        c[u[i]]++;
    }

    ll k=0,m=0,o=0;

    for(int i=60;i<=125;i++){
        if(a[i]>k)
            k = a[i];
        if(b[i]>m)
            m = b[i];
        if(c[i]>o)
            o = c[i];
    }

    cout<<m<<" "<<k<<" "<<o<<endl;
    if(k==1 && n==l)
        k==l;
    else if(k+n>l){
        int pot = (k+n)-l;

        if(pot%2==0)
            k = l;
        else
            k = l-1;
    }
    else if(k+n==l)
        k = l;
    else
        k = k+n;
    if(m==1 && n==l)
        m = l;
    else if(m+n>l){
        int pot = (m+n)-l;

        if(pot%2==0)
            m = l;
        else
            m = l-1;
    }
    else if(m+n==l)
        m = l;
    else
        m = m+n;

    if(o==1 && n==l)
        o = l;
    else if(o+n>l){
        int pot = (o+n)-l;

        if(pot%2==0)
            o = l;
        else
            o = l-1;
    }
    else if(o+n==l)
        o = l;
    else
        o = o+n;


    ll mx = max(m,k);
    mx = max(mx,o);


    if((mx==k && mx==o) || (mx==m && mx==k) || (mx==m && mx==o) ){
        cout<<"Draw"<<endl;
        return 0;
    }
    else{
        if(mx==k)
            cout<<"Kuro"<<endl;
        else if(mx==m)
            cout<<"Shiro"<<endl;
        else if(mx==o)
            cout<<"Katie"<<endl;
    }

    return 0;
}
