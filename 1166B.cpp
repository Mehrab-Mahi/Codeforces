#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int k,m,n;

    cin>>k;

    if(k<25){
        cout<<-1<<endl;
        return 0;
    }
    else{
        int flag = 0;

        for(int i = 2;i<=sqrt(k);i++){
            if(k%i==0){
                if(i>=5 && (k/i)>=5){
                    n = i;
                    m = k/i;
                    flag = 1;
                    break;
                }
            }
        }
        if(flag==0)
            cout<<-1<<endl;
        else{
            string s="aeiou";
            int x = 0;
            for(int i = 1;i<=n;i++){
                for(int j = 1;j<=m;j++){
                    cout<<s[x];
                    x++;

                    if(x==5){
                        x=0;
                    }
                }
                char c = s[0];
                        //cout<<endl<<"  "<<c<<" "<<endl;;
                        for(int ii=0;ii<4;ii++){
                            s[ii]=s[ii+1];
                        }
                            s[4]=c;
                        //cout<<"  "<<s<<" ";
            }
        }
        cout<<endl;
    }

}
