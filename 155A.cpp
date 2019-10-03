#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,l=0,g=0,nr=0,c=0;

    cin>>a[n];

    for(int i = 0 ; i<n;i++)
        cin>>a[i];

    nr = a[0];

    for(int i = 1 ; i<n ; i++){
        if(a[i]==nr){
            continue;
        }
        else if(a[i]>nr && nr!=-1){
            g = a[i];
            l = nr;
            nr = -1;
        }
    }

}

