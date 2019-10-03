#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,m;

    cin>>n;
    m = n;
    string s[n],x;
    int c = 0;
    while(m--){
        cin>>x;

        int l = x.size(),a;

        for(int i = l-1; i>=0;i--){

            if(x[i]>='0' && x[i]<='9'){
                a= x[i]-48;
            }
            else{
                a = x[i]-55;
            }

            bitset<4>b(a);

            //cout<<"   "<<b<<endl;

            for(int j = 0;j<=3;j++){


            string str;
            int bb=b[j];
            str.push_back((char)(bb + '0'));
            s[c].insert(0,str);
            //cout<<" "<<str<<endl;
            }
        }

        c++;

    }
    m = n;
    c = n/2;
    int cnt=1;
   for(int i = 0;i<m/2;i++){

    //cout<<" "<<c<<endl;

    for(int j = 0;j<n/2;j++){
        if(s[j]!=s[c]){
            cout<<cnt<<endl;
            return 0;
        }
        c++;
    }
    cnt++;
    n = n/2;
    c = n/2;

    if(c==0)
        break;

   }

   cout<<cnt<<endl;
}
