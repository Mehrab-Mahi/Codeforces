#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,k,z=0,c=0,tmp;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        tmp = arr[i]/(2*k);
        c = c+tmp;
        arr[i] = arr[i]%(2*k);
    }

    sort(arr,arr+n);


    for(int i =0;i<n;i++)
    {
        if(arr[i]>k) c++;
        if((arr[i]<k || arr[i]==k)&& arr[i]!=0) z++;
    }

    if(z%2==0) c = c+ (z/2);
    else c = c+ (z/2) +1;

    cout<<c<<endl;

}
