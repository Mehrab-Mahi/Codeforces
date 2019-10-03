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

    if(n<=9){
        cout<<1<<endl<<n<<endl;
    }
    else{

            cout<<n<<endl;

            for(int i = 0;i<n;i++){
                    if(i==0)
                        cout<<1;
                    else
                        cout<<" "<<1;

            }
            cout<<endl;



    }

}
