#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int arr[1001];

int main()
{
    optimize;

    int n;

    cin>>n;

    int a[n+1],x;

    for(int i =1;i<=n;i++){
        cin>>a[i];
    }

    for(int i = 1;i<=n;i++){
        memset(arr,0,sizeof(arr));
        x = a[i];
        arr[i]++;
        while(1){
            arr[x]++;
            if(arr[x]>=2){
                cout<<x<<" ";
                break;
            }
            x = a[x];

        }
    }

    cout<<endl;

}

