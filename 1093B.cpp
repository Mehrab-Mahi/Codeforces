#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int tt;
    string s,t;
    cin>>tt;

    while(tt--){
        cin>>s;

        t = s;

        reverse(t.begin(),t.end());

        if(s!=t)
            cout<<s<<endl;
        else{
            int a[130];

            memset(a,0,sizeof(a));

            for(int i = 0;i<s.size();i++){
                a[s[i]]++;
            }

            int m=0;

            for(int i = 65;i<=122;i++){
                if(a[i]!=0)
                    m++;
            }

            if(m==1)
                cout<<-1<<endl;
            else{
                int p1 = 0 , p2 = 0;
                char pos,pos1;

                for(int i = 65;i<=122;i++){
                    if(p1==0){
                        if(a[i]!=0)
                            p1 = i;
                    }
                    else{
                        if(a[i]!=0){
                            p2 = i;
                            break;
                        }
                    }
                }


                for(int i = 0;i<s.size();i++){
                    if(p1==s[i]){
                        pos = s[i];
                        break;
                    }
                }

                for(int i = 0;i<s.size();i++){
                    if(p2==s[i]){
                        pos1 = s[i];
                        break;
                    }
                }

                //cout<<pos<<" "<<pos1<<endl;
                int one = 0,two=0;
                for(int i = 0;i<s.size();i++){
                    if(pos==s[i]&& one ==0){
                        cout<<pos1;
                        one = 1;
                    }
                    else if(pos1==s[i] && two==0){
                        cout<<pos;
                        two = 1;
                    }
                    else
                        cout<<s[i];
                }
                cout<<endl;
            }

        }
    }

}
