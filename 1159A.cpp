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

    int a[n+1];

    for(int i = 1;i<=n;i++)
        cin>>a[i];


    int ans = 1000000007;
	for (int i = 1; i <= n; i++) {
		if (i > 1) ans = min(ans, a[i] / (i - 1));
		if (i < n) ans = min(ans, a[i] / (n - i));
	}

    cout<<ans<<endl;

}
