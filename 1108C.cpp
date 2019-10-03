#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n;
    string s;

    cin>>n>>s;

    vector<char>v[7];

    if(n==1){
        cout<<0<<endl<<s<<endl;
    }
    else if(n==2){
        if(s[0]==s[1]){
            cout<<1<<endl;
            if(s[0]=='B' || s[0]== 'R')
                cout<<s[0]<<"G"<<endl;
            else{
                cout<<s[0]<<"B"<<endl;
            }
        }
        else{
            cout<<0<<endl<<s<<endl;
        }
    }
    else{
        int k = n%3;

        int x = n/3,i=0;

        int a[6]={0},pos;

        for(int y = 0;y<x;y++ ){


            ///RGB

            if(s[i]!='R')
                a[0]++;
            if(s[i+1]!='G')
                a[0]++;
            if(s[i+2]!='B')
                a[0]++;
            v[1].pb('R');
            v[1].pb('G');
            v[1].pb('B');


            ///RBG

            if(s[i]!='R')
                a[1]++;
            if(s[i+1]!='B')
                a[1]++;
            if(s[i+2]!='G')
                a[1]++;

            v[2].pb('R');
            v[2].pb('B');
            v[2].pb('G');


            ///GBR

            if(s[i]!='G')
                a[2]++;
            if(s[i+1]!='B')
                a[2]++;
            if(s[i+2]!='R')
                a[2]++;

            v[3].pb('G');
            v[3].pb('B');
            v[3].pb('R');


            ///GRB

            if(s[i]!='G')
                a[3]++;
            if(s[i+1]!='R')
                a[3]++;
            if(s[i+2]!='B')
                a[3]++;

            v[4].pb('G');
            v[4].pb('R');
            v[4].pb('B');


            ///BGR

            if(s[i]!='B')
                a[4]++;
            if(s[i+1]!='G')
                a[4]++;
            if(s[i+2]!='R')
                a[4]++;

            v[5].pb('B');
            v[5].pb('G');
            v[5].pb('R');

            ///BRG

            if(s[i]!='B')
                a[5]++;
            if(s[i+1]!='R')
                a[5]++;
            if(s[i+2]!='G')
                a[5]++;

            v[6].pb('B');
            v[6].pb('R');
            v[6].pb('G');

            i=i+3;


        }

        pos = x*3;


        if(k>=1){
            ///RGB
           // cout<<s[pos]<<" "<<pos<<endl;
            if(s[pos]!='R')
                a[0]++;
            v[1].pb('R');




            ///RBG

            if(s[pos]!='R')
                a[1]++;

            v[2].pb('R');



            ///GBR

            if(s[pos]!='G')
                a[2]++;
            v[3].pb('G');



            ///GRB

            if(s[pos]!='G')
                a[3]++;
            v[4].pb('G');



            ///BGR

            if(s[pos]!='B')
                a[4]++;

            v[5].pb('B');

            ///BRG

            if(s[pos]!='B')
                a[5]++;

            v[6].pb('B');

        }


        if(k==2){
            pos++;

            ///RGB


            if(s[pos]!='G')
                a[0]++;
            v[1].pb('G');



            ///RBG

            if(s[pos]!='B')
                a[1]++;
            v[2].pb('B');



            ///GBR

            if(s[pos]!='B')
                a[2]++;
            v[3].pb('B');


            ///GRB

            if(s[pos]!='R')
                a[3]++;
            v[4].pb('R');


            ///BGR

            if(s[pos]!='G')
                a[4]++;
            v[5].pb('G');

            ///BRG

            if(s[pos]!='R')
                a[5]++;

            v[6].pb('R');


        }

        int b[6];

        for(int i = 0;i<6;i++)
            b[i] = a[i];

        sort(b,b+6);

        int z = b[0],pp;

        for(int i= 0;i<6;i++){
            if(z==a[i]){
                pp = i;
                break;
            }
        }

        cout<<z<<endl;
        pp++;

        for(int i = 0;i<v[pp].size();i++){
            cout<<v[pp][i];

        }
        cout<<endl;



    }

}
