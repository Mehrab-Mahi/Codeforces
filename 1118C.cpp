#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n;

    cin>>n;
    int x=n*n;
    int a[x];

    for(int i = 0;i<n*n;i++){
        cin>>a[i];
    }

    sort(a,a+x);



    int c=0;
    if(n%2==0){
        for(int i = 0;i<n*n;i=i+4){
            if(a[i]==a[i+1] && a[i+1]==a[i+2] && a[i+2]==a[i+3]){
                c=1;
            }
            else{
                //cout<<"  "<<a[i]<<endl;
                cout<<"NO\n";
                return 0;
            }
        }

        int aa[n+1][n+1];
        int rf=1,rl=n,cf=1,cl=n;
        for(int i = 0;i<n*n;i=i+4){
                cf = 1,cl=n;
            for(int j = 0 ; j<n/2 ;j++){
                //cout<<i<<"  "<<a[i]<<" "<<endl; ;
                aa[rf][cf]=a[i];
                aa[rl][cf]=a[i];
                aa[rf][cl]=a[i];
                aa[rl][cl] = a[i];

                cf++;
                cl--;
                i=i+4;
            }
            i=i-4;

            rf++;
            rl--;

        }
    //cout<<a[0]<<endl;

        cout<<"YES\n";

                for(int i = 1;i<=n;i++){
                    for(int j = 1;j<=n;j++){
                    if(j!=1){
                        cout<<" "<<aa[i][j];
                    }
                    else
                        cout<<aa[i][j];
                    }
                    cout<<endl;
                }


    }
    else{
        int k = (n-1)*(n-1);
        k = k/4;
        vector<int> v4,v2,v1;

        for(int i = 0;i<n*n; ){
                //cout<<" "<<i<<endl;
            if(i+3<n*n && a[i]==a[i+1] && a[i+1]==a[i+2] && a[i+2]==a[i+3] && v4.size()<k){
                v4.pb(a[i]);
                i=i+4;

            }
            else if(i+1<n*n && a[i]==a[i+1]){
                v2.pb(a[i]);
                i=i+2;
            }
            else{
                v1.pb(a[i]);
                i++;

                if(v1.size()>1){
                    cout<<"NO\n";
                    return 0;
                }
            }

        }

            //cout<<" "<<v4.size()<<" "<<v2.size()<<" "<<v1.size()<<endl;

            if(v4.size()>=k && v2.size()>=n-1 && v1.size()==1){

                cout<<"YES\n";

                int aa[n+1][n+1];

                int rf=1,rl=n,cf=1,cl=n;
                for(int i = 0;i<v4.size();i++){
                    cf = 1,cl=n;
                    for(int j = 0 ; j<n/2 ;j++){
                        aa[rf][cf]=v4[i];
                        aa[rl][cf]=v4[i];
                        aa[rf][cl]=v4[i];
                        aa[rl][cl] = v4[i];

                        cf++;
                        cl--;
                    }

                    rf++;
                    rl--;

                }

                int col = (n/2)+1;
                rf=1,rl=n;

                for(int i = 0;i<n/2;i++){
                    aa[rf][col]=v2[i];
                    aa[rl][col]=v2[i];

                    rf++;
                    rl--;
                    v2.erase(v2.begin()+0);
                }

                int row = (n/2)+1;
                cf=1,cl=n;

                for(int i = 0;i<n/2;i++){
                    aa[row][cf]=v2[i];
                    aa[row][cl]=v2[i];

                    cf++;
                    cl--;
                    v2.erase(v2.begin()+0);
                }

                aa[(n/2)+1][(n/2)+1]=v1[0];

                for(int i = 1;i<=n;i++){
                    for(int j = 1;j<=n;j++){
                    if(j!=1){
                        cout<<" "<<aa[i][j];
                    }
                    else
                        cout<<aa[i][j];
                    }
                    cout<<endl;
                }


            }
            else{
                cout<<"NO\n";
                return 0;
            }

    }



}
