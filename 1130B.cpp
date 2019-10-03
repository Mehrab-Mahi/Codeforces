#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int a[100005],b[100005];
int main()
{
    optimize;

    int n;

    cin>>n;

    int xx;

    for(int i = 1;i<=2*n;i++){
        cin>>xx;

        if(a[xx]==0){
            a[xx]=i;
        }
        else{
            b[xx] = i;
        }
    }

//    for(int i =1 ;i<=n;i++)
//        cout<<a[i]<<" ";
//
//    cout<<endl;
//
//    for(int i =1 ;i<=n;i++)
//        cout<<b[i]<<" ";
//
//    cout<<endl;


    ll x=0,pointa=1,pointb=1,p,q;

    for(int i = 1;i<=n;i++){
        p = abs(pointa-a[i])+abs(pointb-b[i]);
        q = abs(pointa-b[i])+abs(pointb-a[i]);

        if(p<q){
            x+=p;
            pointa=a[i];
            pointb=b[i];
        }
        else{
            x+=q;
            pointa=b[i];
            pointb = a[i];
        }
    }



    cout<<x<<endl;


}
