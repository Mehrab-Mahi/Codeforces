#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,x,y,cx=0,cy = 0,pos=0;

    cin>>n;

    int a[n];

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);
    x = a[0];
    cx++;
    for(int i = 1;i<n;i++){
        if(a[i]!=x){
            y = a[i];
            pos = i;
            break;
        }
        else
            cx++;
    }

    if(pos!=0){
        if(cx==n/2){
            for(int i = pos;i<n;i++){
                if(a[i]==y){
                    cy++;
                }
                else
                    break;
            }

            if(cx==cy){
                cout<<"YES\n"<<x<<" "<<y<<endl;
            }
            else
                cout<<"NO\n";
        }
        else
            cout<<"NO\n";
    }
    else
        cout<<"NO\n";

}
