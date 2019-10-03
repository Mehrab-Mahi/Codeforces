#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long double
#define pb push_back

using namespace std;

int main()
{
    optimize;

    ll x,y;

    cin>>x>>y;

    ll xy, yx;
    xy = y * log(x);
    yx = x * log(y);
    if (xy == yx) {
        cout << "=" << endl;
    } else if (xy < yx) {
        cout << "<" << endl;
    } else {
        cout << ">" << endl;
    }

}
