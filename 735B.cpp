#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,n1,n2,pos=0,c = 0;
    double s1=0,s2=0;

    cin>>n>>n1>>n2;

    int a[n];

    for(int i = 0 ; i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    if(n1<n2)
        swap(n1,n2);

    for(int i = n-1;i>=0;i--){
        s2 = s2 + a[i];
        c++;
        pos = i;
        if(c>=n2)
            break;
    }

    s2 = s2/n2;

    c= 0;
    for(int i = pos-1;i>=0;i--){
        s1 = s1 + a[i];

        c++;

        if(c>=n1)
            break;
    }

    s1 = s1/n1;
    //cout<<s1<<" "<<s2<<endl;
    double s = s1+s2;

    printf("%.8f\n",s);

}
