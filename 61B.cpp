#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    string s,p,q,r,temp;

    cin>>p>>q>>r;

    for(int i = 0;i<p.size();i++){
        if(p[i]=='-' || p[i]== ';' || p[i]== '_')
        {
            p.erase(p.begin()+i);
            i = i-1;
        }
        else{
            if(p[i]>96)
                p[i] = p[i] - 32;
        }
    }

    for(int i = 0;i<q.size();i++){
        if(q[i]=='-' || q[i]== ';' || q[i]== '_')
        {
            q.erase(q.begin()+i);
            i = i-1;
        }
        else{
            if(q[i]>96)
                q[i] = q[i] - 32;
        }
    }

    for(int i = 0;i<r.size();i++){
        if(r[i]=='-' || r[i]== ';' || r[i]== '_')
        {
            r.erase(r.begin()+i);
            i = i-1;
        }
        else{
            if(r[i]>96)
                r[i] = r[i] - 32;
        }
    }


    int t,pl=p.size(),ql=q.size(),rl=r.size(),h1,h2,h3;

    if(ql>pl && ql>rl){
        temp = p;
        p = q;
        q = temp;

        if(r.size()>q.size()){
            temp = q;
            q = r;
            r = temp;
        }
    }
    else if(rl>pl && rl>ql){
        temp = p;
        p = r;
        r = temp;

        if(r.size()>q.size()){
            temp = q;
            q = r;
            r = temp;
        }
    }
    else if(pl>ql && pl>rl){
        if(rl>ql){
            temp = q;
            q = r;
            r = temp;
        }
    }

    //cout<<p<<endl<<q<<endl<<r<<endl;

    cin>>t;
    while(t--){

        cin>>s;

        for(int i = 0;i<s.size();i++){
        if(s[i]=='-' || s[i]== ';' || s[i]== '_')
        {
            s.erase(s.begin()+i);
            i = i-1;
        }
        else{
            if(s[i]>96)
                s[i] = s[i] - 32;
        }
        }

        int pos= 0,cnt=0,l = 0,m=0;
        for(int i = 0;i<s.size();i++){
            if(s[i]==p[0] && p.size()>1){
                    pos = i;
                    m=0;
                    cnt = 1;
                    if(i+1>=s.size())
                        break;
                if(i+1<s.size())
                for(int j = i+1;j<i+p.size();j++){
                        if(j>=s.size())
                            break;
                    if(s[j]==p[cnt]){
                        cnt++;
                        l = j;
                        if(cnt==p.size())
                            break;
                    }
                    else{
                        m = 1;
                        break;
                    }
                }

                if(m==0){
                    for(int j = pos;j<=l;j++)
                        s[j]=0;
                }
            }
            else if(s[i]==p[0] && p.size()==1){
                s[i]=0;
                i = l;
            }
        }


        //cout<<s<<endl;

        for(int i = 0;i<s.size();i++){
                //cout<<i<<endl;
            if(s[i]==q[0] && q.size()>1){
                   // cout<<s[i];
                    if(i+1>=s.size())
                        break;
                    pos = i;
                    m=0;
                    cnt = 1;
                    if(i+1<s.size())
                for(int j = i+1;j<i+q.size();j++){
                        //cout<<pos<<" "<<j<<endl;
                        if(j>=s.size()){
                           // i =j;
                            break;
                        }
                    if(s[j]==q[cnt]){
                        //cout<<s[j];
                        cnt++;
                        l = j;
                        if(cnt==q.size())
                            break;

                    }
                    else{
                        m = 1;
                        //cout<<j<<endl;

                        break;
                    }
                }


                if(m==0){
                        //cout<<pos<<" "<<l<<endl;
                    for(int j = pos;j<=l;j++)
                        s[j]=0;
                        i = l;
                }
            }
            else if(s[i]==q[0] && q.size()==1){
                s[i]=0;
            }
        }

        //cout<<s<<endl;

        for(int i = 0;i<s.size();i++){
            if(s[i]==r[0] && r.size()>1){
                    pos = i;
                    m=0;
                    cnt = 1;
                    if(i+1>=s.size())
                        break;
                if(i+1<s.size())
                for(int j = i+1;j<i+r.size();j++){
                        if(j>=s.size())
                            break;
                    if(s[j]==r[cnt]){
                        cnt++;
                        l = j;
                        if(cnt==r.size())
                            break;
                    }
                    else{
                        m = 1;
                        break;
                    }
                }

                if(m==0){
                    for(int j = pos;j<=l;j++)
                        s[j]=0;
                        i = l;
                }
            }
            else if(s[i]==r[0] && r.size()==1){
                s[i]=0;
            }
        }

        m = 0;

        for(int i = 0;i<s.size();i++){
            if(s[i]!=0){
                m = 1;
                break;
            }
        }
        //cout<<s<<m<<endl;

        if(m==0){
            cout<<"ACC"<<endl;
        }
        else
            cout<<"WA"<<endl;
    }

}
