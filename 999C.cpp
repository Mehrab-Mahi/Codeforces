#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int a[123];
int main()
{
    optimize;

    int n,k,c=0,m,x = 0,br=0;

    string s;
    char ch;
    cin>>n>>k>>s;

    for(int i = 0; i<n ; i++){
        a[s[i]]++;
    }

    for(int i = 97;i<=122;i++){
        m = a[i];
        c = 0;
        for(int j = 0;j<n ;j++){
            if(s[j]==i){
                s[j] = 0;
                c++;
                x++;

                if(x>=k){
                    br = 1;
                    break;
                }
            }
            if(c>=m)
                break;
        }

        if(br==1)
            break;
    }

    for(int i = 0;i<n;i++){
        if(s[i]!=0)
            cout<<s[i];
    }
    cout<<endl;

}
