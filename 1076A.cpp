#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,p=-1;
    string s;

    cin>>n>>s;

    for(int i = 0;i<n;i++){
        if(s[i]>s[i+1])
        {

            p  = i;
            break;
        }
    }

    if(p==-1){
        p = n-1;
    }

    for(int i = 0;i<n;i++){
        if(p!=i)
            cout<<s[i];
    }
    cout<<endl;

}
