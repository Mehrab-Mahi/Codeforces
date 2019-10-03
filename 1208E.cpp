#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int ans[1000000];
int main()
{
    optimize;

    int r,c;

    cin>>r>>c;

    int a[r][c],b[r];

    for(int i = 0;i<r;i++){
        cin>>b[i];

        for(int j = 0; j<b[i] ;j++)
            cin>>a[i][j];
    }

    int x =0;
    for(int i = 0;i<c;i++){

        for(int j = 0;j<r;j++){
            if(b[j]<c){

                int k = c - b[j];
                //cout<<k<<"  "<<j<<endl;
                if(i-k<0){
                    x = 0;
                }
                else
                    x = i-k;
            }

            //cout<<"     "<<x<<endl;

            for(int y = x;y<i-1;y++){
                for(int yy = x;yy<i-1;yy++){
                    cout<<a[j][yy]<<" "<<a[j][yy+1]<<endl;
                if(a[j][yy]>a[j][yy+1]){
                    swap(a[j][yy],a[j][yy+1]);
                }
                }
            }

            //cout<<x<<" "<<a[j][i]<<endl;

            //cout<<a[2][0]<<"  "<<a[2][1]<<endl;

            if(ans[i]+a[j][i]>ans[i])
                ans[i] = ans[i]+a[j][i];
            else{
                if(c-b[i]>=i)
                    ans[i]+=0;
                else
                    ans[i]+=a[j][i];
            }
        }
    }

    for(int i = 0;i<c;i++)
        cout<<ans[i]<<endl;


}
