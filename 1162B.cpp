#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,m;

    cin>>n>>m;

    int a[n][m],b[n][m];

    for(int i = 0;i<n ;i++){
        for(int j = 0;j<m;j++){
            cin>>a[i][j];
        }
    }


    for(int i = 0;i<n ;i++){
        for(int j = 0;j<m;j++){
            cin>>b[i][j];
        }
    }


    for(int i = 0;i<n;i++){
        for(int j = 1;j<m;j++){
            if(a[i][j]<=a[i][j-1] || b[i][j]<=b[i][j-1]){
                swap(a[i][j-1],b[i][j-1]);

                if(a[i][j]<=a[i][j-1] || b[i][j]<=b[i][j-1]){
                    swap(a[i][j-1],b[i][j-1]);
                    swap(a[i][j],b[i][j]);

//                    cout<<a[i][j-1]<<" "<<a[i][j]<<endl;
//                    cout<<b[i][j-1]<<" "<<b[i][j]<<endl;
////
//                    cout<<a[0][0]<<" "<<a[0][1]<<endl;
//                    cout<<b[0][0]<<" "<<b[0][1]<<endl;

                    if(a[i][j]<=a[i][j-1] || b[i][j]<=b[i][j-1]){
                        cout<<"Impossible"<<endl;
                        return 0;
                    }

                }

            }
        }
    }

    //cout<<"sdff"<<endl;
    for(int i = 0;i<m;i++){
        for(int j = 1;j<n;j++){
            if(a[j][i]<=a[j-1][i] || b[j][i]<=b[j-1][i]){
                swap(a[j-1][i],b[j-1][i]);

                if(a[j][i]<=a[j-1][i] || b[j][i]<=b[j-1][i]){
                    swap(a[j-1][i],b[j-1][i]);
                    swap(a[j][i],b[j][i]);

                    if(a[j][i]<=a[j-1][i] || b[j][i]<=b[j-1][i]){
                        cout<<"Impossible"<<endl;
                        return 0;
                    }

                }

            }
        }
    }

    cout<<"Possible"<<endl;
}
