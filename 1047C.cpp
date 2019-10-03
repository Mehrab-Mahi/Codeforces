#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int aa[100];
int main()
{
    int arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,47,53,59,61,67,71,73,79,83,89,97};

    optimize;

    map<int,int>mp;

    int n;

    cin>>n;

    int a[n],c=0,x,pos=0;

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    if(a[n-1]==1){
        cout<<-1<<endl;
        return 0;
    }

    for(int i = 0;i<n-1;i++){

            x = a[i];

            if(x==1){
                c++;
                pos = i+1;
            }
            if(x!=1)
                break;
    }

    for(int i = pos;i<n;i++){
        for(int j = 0;j<24;j++){
            if(arr[j]>a[i])
                break;

            if((a[i]%arr[j])==0)
                aa[j]++;
        }
    }
     x=0;
    for(int i = 0;i<=100;i++){
        if(aa[i]>=x)
            x = aa[i];
    }

    if(c+x==n-1)
        cout<<-1<<endl;
    else{
        x = n-x;

        cout<<x<<endl;
    }

}
