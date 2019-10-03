#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
   int n,c=0,p=0;

   cin>>n;

   string s;

   cin>>s;

   for(int i = 0;i<s.size();i++){
       c = 0;
    if(s[i]=='x'){
        c++;
        if((i+1)<s.size()){
        for(int j = i+1;j<s.size();j++){
            if(s[j]=='x')
                c++;
            else{
                i = j;
                //cout<<i<<endl;
                if(c>=3)
                    p = p+(c-2);
                    break;

            }

            if(j==s.size()-1){
                i = j;
                if(c>=3)
                    p = p+(c-2);
                break;
            }
        }
        }
    }
   }

   cout<<p<<endl;
}
