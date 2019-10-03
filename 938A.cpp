#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
   string s;
   vector<char>v;
   char a;
   int n;

   cin>>n;
   cin>>s;

   for(int i = 0;i<n; ){
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='u'|| s[i]=='o'||s[i]=='y'){
            a=s[i];
            v.pb(a);
            if(i<n-1)
                i++;
        while(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='u'|| s[i]=='o'||s[i]=='y'){
            if(i>n-1)
                break;
            i++;
        }

        //v.pb(a);
    }
    else{
    v.pb(s[i]);
    i++;
   }
   if(i>n-1)
    break;
   }

   for(int i = 0;i<v.size();i++)
    cout<<v[i];

   cout<<endl;
}
