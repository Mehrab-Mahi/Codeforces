#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;

    cin>>s1>>s2;

    int len1,len2;

    len1 = s1.size();

    len2 = s2.size();

    int a = 0,b[2];

    if(len1!=len2){
        cout<<"NO"<<endl;
    }
    else{
    for(int i=0;i<len1;i++){
        if(s1[i]!=s2[i]){
            b[a]=i;
            a++;
        }
        if(a==2)
            break;
    }
        swap(s1[b[0]] , s1[b[1]]);

        if(s1==s2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
}
