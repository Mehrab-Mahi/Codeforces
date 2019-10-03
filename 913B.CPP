#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,p=1,bs=0;

    vector<int>a[10099];

    int n;

    cin>>n;

    for(int i=0;i<n-1;i++)
    {
        cin>>m;
        p++;
        a[m].push_back(p);
        if(m>bs)
            bs = m;
    }

    int k = bs,q,b,c=0,x;

    for(int i=1;i<=k;i++){
            int len = a[i].size();
            if(len!=0){
            int l = len;
            q = 0;
            b=0;
        while(l){
            x=a[i][q];
            if(a[x].size()>0){
                b++;
            }
            q++;
            l--;
        }

        if((len-b)<3){
            c=1;
            cout<<"No"<<endl;
            break;
        }
    }
    }

    if(c==0)
        cout<<"Yes"<<endl;
}
