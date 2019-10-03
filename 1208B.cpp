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
    int a[n],l=0,r=n-1,lloc=0,rloc=n-1;

    map<int,int>mp;

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    while(1){

        if(l!=-1){
            if(mp[a[l]]==0){
                mp[a[l]]=1;
                lloc = l;
            }
            else{
                lloc=l;
                l = -1;
            }
        }

        if(r!=-1 && l<r){
            if(mp[a[r]]==0){
                mp[a[r]]=1;
                rloc = r;
            }
            else{
                rloc=r;
                r = -1;
            }
        }

        //cout<<l<< "  "<< r<<endl;

        if(l==-1 && r==-1){
            break;
        }
        else{
            if(l!=-1){
                l++;

                if(l>=rloc)
                    break;
            }
            if(r!=-1){
                r--;

                if(r<=lloc)
                    break;
            }


        }

    }

    if(l==-1 && r==-1){
        cout<<abs(lloc-rloc)+1<<endl;
    }
    else if(l==-1 && r!=-1){
        cout<<1<<endl;
    }
    else if(r==-1 && l!=-1){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }

}
