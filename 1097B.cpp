#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;
vector<int>v;
void combinationUtil(int arr[],int n,int r,int index,int data[],int i);

void printCombination(int arr[], int n, int r)
{
    int data[r];

    combinationUtil(arr, n, r, 0, data, 0);
}
 void combinationUtil(int arr[], int n, int r, int index, int data[], int i)
{
    if (index == r)
    {
        int xx = 0;
        for (int j=0; j<r; j++)
            xx+=data[j];

        v.pb(xx);
        return;
    }

    if (i >= n)
        return;

    data[index] = arr[i];
    combinationUtil(arr, n, r, index+1, data, i+1);

    combinationUtil(arr, n, r, index, data, i+1);
}

int main()
{
    optimize;

    int n,s=0;

    cin>>n;

    int a[n];

    for(int i = 0; i < n ;i++){
        cin>>a[i];
        s+=a[i];
    }

    if(s%360==0){
        cout<<"YES\n";
        return 0;
    }
    else{
        int k = s/2,c=0,x = 0;

    int r  ;

    for(int i = 1;i<=n;i++){
            r=i;
    int n = sizeof(a)/sizeof(a[0]);
    printCombination(a, n, r);
    }





        k= s%360;

        if(k%2==1){
            cout<<"NO\n";
            return 0;
        }

        k = k / 2;

        for(int i = 0;i<v.size();i++){
            if(v[i]==k){
                cout<<"YES\n";
                return 0;
            }
        }


        k = s/2;

        for(int i = 0;i<v.size();i++){
            if(v[i]==k){
                cout<<"YES\n";
                return 0;
            }
        }


        cout<<"dfgdfg\n";

        cout<<"NO\n";
    }





}
