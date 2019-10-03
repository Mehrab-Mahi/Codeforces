#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;
int aa[1001];
int main()
{
    optimize;

    int n,r,pos=0,h=0;

    cin>>n>>r;
    int ra = 2*r-1;
    int a[n];

    for(int i = 0; i<n;i++){
        cin>>a[i];
    }

    for(int i = pos;i<n;i++){
        if(aa[i]==0){
            if(i+r-1>=n) pos = n-1;
            else pos = i+r-1;

            for(int j = pos;j>=j-r+1;j--){
                if(j<0)
                break;
                if(a[j]==1){
                    h++;
                    a[j] = 0;

                    for(int k = j;k<=j+r-1;k++){
                        aa[k] = 1;
                        pos = k+1;
                        if(k>=n)
                            break;
                    }

                    for(int k = j;k>=j-r+1;k--){
                        aa[k] = 1;
                        if(k<=0)
                            break;
                    }
                    break;
                }
            }
        }
    }




    pos = 0;





    for(int i = 0;i<n;i++){
        if(aa[i]==0){
            cout<<-1<<endl;
            return 0;
        }
    }
   cout<<h<<endl;
}
