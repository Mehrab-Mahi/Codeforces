#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int n;

    cin>>n;

    int a[n];

    for(int i = 0;i<n;i++)cin>>a[i];

    sort(a,a+n);

    int me=1,frnd=1000000,c=-1,b=-1;

    for(int i = 0;i<n;i++)
    {
        if(a[i]>500000)
        {
            b = i;
            if(n>1)
                c = i-1;
            else
                c = -1;
            break;
        }
    }

    if(b==-1){
        cout<<a[n-1]-1<<endl;
    }
    else if(b!=-1 && c!=-1){
        frnd = frnd - a[b];
        me = a[c]-1;


    if(frnd>me)
        cout<<frnd<<endl;
    else
        cout<<me<<endl;
    }
    else
        cout<<frnd-a[b]<<endl;
}

