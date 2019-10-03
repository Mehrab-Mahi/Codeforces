#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int check(int n){

    if(n==2 || n==3)
        return 1;

    for(int i = 2;i<sqrt(n);i++){
        if(n%i==0)
            return 2;
    }
    return 1;
}

int main()
{
    optimize;

    int n,k,x=0;



    cin>>n>>k;

    if(n<k){
        cout<<n+k<<endl;
        return 0;
    }
    else if(n==k){
        int kk = check(n);

        if(kk==1){
            cout<<(n*n)+1<<endl;
        }
        else{
            for(int i = n;i<=3*n;i++){
        x = i;

        if(((x/k)*(x%k))==n){

                cout<<i<<endl;
                break;

        }
    }
        }
    }

    else{

    for(int i = n;i<=1000000000;i++){
        x = i;

        if(((x/k)*(x%k))==n){

                cout<<i<<endl;
                break;

        }
    }
}


}
