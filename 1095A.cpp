#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,k=1;
    string s;

    cin>>n>>s;

    for(int i = 0; i<n; ){
        cout<<s[i];

        i+=k;
        k++;

        if(i>=n)
            break;
    }
    cout<<endl;

}
