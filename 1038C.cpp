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
    int a[n],b[n];
    ll A=0,B=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i =0;i<n;i++){
        cin>>b[i];
    }

    sort(a,a+n);
    sort(b,b+n);

    int x = n-1,y=n-1,z=1;

    for(int i =0;i<2*n;i++){
        if(z%2==1){
            if(a[x]>b[y] && x>=0 && y>=0){
                A = A+a[x];
                x--;
            }
            else if(a[x]<b[y] && x>=0 && y>=0){
                b[y] = 0;
                y--;
            }
            else if(a[x]==b[y]){
                A = A + a[x];
                x--;

            }
            else if(x<0 && y>=0){
                b[y] = 0;
                y--;
            }
            else if(x>=0 && y<0){
                A = A+a[x];

                x--;
            }
        }
        else{
            if(a[x]<b[y] && x>=0 && y>=0){
                B = B+b[y];
                y--;
            }
            else if(a[x]>b[y] && x>=0 && y>=0){
                a[x] = 0;
                x--;
            }
            else if(a[x]==b[y]){
                B = B + b[y];
                y--;

            }
            else if(y<0 && x>=0){
                a[x] = 0;
                x--;
            }
            else if(y>=0 && x<0){
                B = B+b[y];
                y--;
            }
        }


        z++;
    }
    //cout<<A<<" "<<B<<endl;
    cout<<A-B<<endl;

}
