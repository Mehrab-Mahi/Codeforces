#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n;

    ll before =0,after=0,pos=0,s=0;

    cin>>n;

    int a[n],b[n];

    for(int i = 0;i<n;i++){
        cin>>a[i];
        b[i] = a[i];
    }

    sort(b,b+n);


    int k = b[n-1];

    for(int i = 0;i<n;i++){
        if(a[i]==k){
            pos = i;
            break;
        }
    }


    if(pos==0){
        before = 0;
    }
    else if(pos == 1){
        before = a[0];
    }
    else{
        if(a[0]<0 && a[1]<0)
            before = a[0]+a[1];
        else if(a[0]>a[1])
            before = a[1]-a[0];
        else if(a[0]<a[1])
            before = a[0] - a[1];
        else if(a[0]==a[1] && a[0]<0)
            before = a[0]+a[1];
        else if(a[0]==a[1] && a[0]>=0)
            before = a[0]-a[1];

        for(int i = 2;i<pos;i++){
            if(before<0 && a[i]<0)
                before = before + a[i];
            else if(before>a[i])
                before = a[i]-before;
            else if(before<a[i])
                before = before - a[i];
            else if(before==a[i] && a[i]<0)
                before = before+a[i];
            else if(before==a[i] && a[i]>=0)
                before = before-a[i];
        }
    }


    if(pos==n-1){
        after = 0;
    }
    else if(pos == n-2){
        after = a[n-1];
    }
    else{
        if(a[n-1]<0 && a[n-2]<0)
            after = a[n-1]+a[n-2];
        else if(a[n-1]>a[n-2])
            after = a[n-2]-a[n-1];
        else if(a[n-1]<a[n-2])
            after = a[n-1] - a[n-2];
        else if(a[n-1]==a[n-2] && a[n-1]<0)
            after = a[n-1]+a[n-2];
        else if(a[n-1]==a[n-2] && a[n-1]>=0)
            after = a[n-1]-a[n-2];

          for(int i = n-3;i>pos;i--){
            if(after<0 && a[i]<0)
                after = after + a[i];
            else if(after>a[i])
                after = a[i]-after;
            else if(after<a[i])
                after = after - a[i];
            else if(after==a[i] && a[i]<0)
                after = after + a[i];
            else if(after==a[i] && a[i]>=0)
                after = after - a[i];
        }

    }

    s = a[pos]-before;

    if(s>after)
        s = s - after;
    else
        s = after - s;

    cout<<s<<endl;

}
