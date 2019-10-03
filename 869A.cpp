#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;
int arr[10000009];

int main()
{
    optimize;

    map<int,int>mp;

    int n;

    cin>>n;

    int a[n],b[n];

    for(int i = 0;i<n;i++){
        cin>>a[i];

        arr[a[i]] = 1;
    }

    for(int i = 0;i<n;i++){
        cin>>b[i];

        arr[b[i]] = 1;
    }

    int s = 0,p;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            p = a[i]^b[j];

            if(arr[p]==1){
                s++;
            }
        }
    }


        cout<<"Karen\n";


}
