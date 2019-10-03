#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int arr[100][100];

int main()
{
    int n,sum=0;
    char x,y;
    string s;

    cin>>n>>s;

    for(int i = 0;i<n-1;i++){
        arr[s[i]][s[i+1]]++;
    }

    for(int i = 65;i<91;i++){
        for(int j = 65;j<91;j++){
            if(arr[i][j]>sum){
                sum = arr[i][j];
                x = i;
                y = j;
            }
        }
    }

    cout<<x<<y<<endl;
}
