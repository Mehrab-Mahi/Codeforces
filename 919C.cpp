#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,k;

    cin>>n>>m>>k;

    string s[n];

    int c = 0,f;

    for(int i=0;i<n;i++){
       cin>>s[i];
    }

        for(int i=0;i<n;i++){
                f=0;
        for(int p=0;p<m;p++){
        if(s[i][p]!='*'){
            f++;
           // cout<<f<<endl;

            if(p==m-1 ){
                    if(f>=k && k!=1)
                        c = c + f -k +1;
                    if(k==1)
                        c =c +f;
                f=0;
            }

        }
            else{
            if(f>=k && k!=1)
                c = c+f-k+1;

            if(k==1)
                c = c+f;
            f = 0;
            }
    }
}

//cout<<c<<endl;




    /// column

    for(int i=0;i<m;i++){
            f=0;
        for(int p=0;p<n;p++){
        if(s[p][i]!='*'){
            f++;

             if(p==n-1){
                    if(f>=k && k!=1)
                        c = c + f -k +1;
                f=0;
            }

        }
            else{
            if(f>=k && k!=1)
            c = c+f-k+1;
            f = 0;
        }


    }

}

    cout<<c<<endl;

}
