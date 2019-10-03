#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int a[105][105];

int main()
{

    int n , k ,m = 0;

    cin>>n>>k;

    string s[n];

    for(int i = 0;i<n;i++){
        cin>>s[i];
    }

    for(int i = 0;i<n;i++){

        for(int j = 0;j<n;j++){

            if(n-j>=k){
                    m = 0;

                for(int x=j;x<j+k;x++){
                    if(s[i][x]=='#'){
                        m = 1;
                        break;
                    }
                }

                if(m==0){
                    for(int x=j;x<j+k;x++){
                        a[i][x] = a[i][x]+1;
                       // cout<<"i "<<i<<"  AND  x "<<x<<" ";
                }
               // cout<<endl;
                }
            }

        }

    }


    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
              if(n-j>=k){
                    m = 0;
                for(int x=j;x<j+k;x++){
                    if(s[x][i]=='#'){
                        m = 1;
                        break;
                    }
                }

                if(m==0){
                    for(int x=j;x<j+k;x++){
                        a[x][i] = a[x][i] + 1;
                }
                }
            }

        }
    }


    int h = 0,x=1,y=1;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
               // cout<<a[i][j]<<" ";
            if(a[i][j]>h){
                h = a[i][j];
                x = i+1;
                y = j+1;
            }
        }
      // cout<<endl;
    }

   // cout<<a[x-1][y-1]<<endl;
    cout<<x<<" "<<y<<endl;

}
