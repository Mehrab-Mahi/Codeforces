#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n;

    cin>>n;

    int a[n];

    for(int i = 0; i<n ;i++)
        cin>>a[i];

    sort(a,a+n);

    int c = 1;

    for(int i = 0;i<n;i++)
        if(a[i]>=c)
            c++;

    cout<<c-1<<endl;
}
