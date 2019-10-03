#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    string s,t;

    cin>>s>>t;

    int sh=0,sm=0,th=0,tm=0,a,ansh=0,ansm=0;

    sm = (s[4]-48)+((s[3]-48)*10);
    sh = (s[1]-48)+((s[0]-48)*10);

    tm = (t[4]-48)+((t[3]-48)*10);
    th = (t[1]-48)+((t[0]-48)*10);


    ansh = sh-th;

    if(ansh<0)
        ansh = 24+ansh;

    ansm = sm - tm;

    if(ansm<0){
        ansh--;
        if(ansh<0)
            ansh = 24+ansh;

        ansm =60+ansm;
    }
    if(ansh<10)
        cout<<0<<ansh<<":";
    else
        cout<<ansh<<":";

    if(ansm<10)
        cout<<0<<ansm<<endl;
    else
        cout<<ansm<<endl;
}
