#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;
int a[100005],b[100005];
int main()
{
    optimize;
  int n;
  cin >> n;

  for(int i=0; i<n; i++){
    cin >> a[i];
   b[a[i]]++;
  }

  sort(a,a+n);

  for(int i=n-1; i>=0; i--){
    if(b[a[i]]%2){
      cout << "Conan" << endl;
      //cout<<a[i]<<endl;
      exit(0);
    }
  }

  cout << "Agasa" << endl;


}
