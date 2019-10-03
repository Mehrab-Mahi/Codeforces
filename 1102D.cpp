#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,one=0,two=0,zero=0;

    string s;

    cin>>n>>s;

    for(int i = 0; i<n ; i++){
        if(s[i]=='0')
            zero++;
        else if(s[i]=='1')
            one++;
        else
            two++;
    }

    if(zero==one && zero==two)
        cout<<s<<endl;
    else{

        int n0=n/3,
        n1 = n/3,
        n2 = n/3;








             if(n0>zero){
            int x = zero;

            if(two>n2){

                for(int i =0;i<n;i++){
                    if(s[i]=='2'){
                        s[i]='0';
                        x++;
                        two--;
                    }

                    if(x==n0 || two==n2){
                        break;
                    }
                }

                if(x!=n0){
                    for(int i =0;i<n;i++){
                    if(s[i]=='1'){
                        s[i]='0';
                        x++;
                        one--;
                    }

                    if(x==n0 || one==n1){
                        break;
                    }
                }
                }

            }
            else{


                for(int i =0;i<n;i++){
                    if(s[i]=='1'){
                        s[i]='0';
                        x++;
                        one--;
                    }

                    if(x==n0 || one==n1){
                        break;
                    }
                }

            }



        }








         if(two<n2){

            int x = two;

            if(one>n1){

                for(int i =n-1;i>=0;i--){
                    if(s[i]=='1'){
                        s[i]='2';
                        x++;
                        one--;
                    }

                    if(x==n2 || one==n1){
                        break;
                    }
                }

                if(x!=n2){
                    for(int i =n-1;i>=0;i--){
                    if(s[i]=='0'){
                        s[i]='2';
                        x++;
                        zero--;
                    }

                    if(x==n2 || zero==n0){
                        break;
                    }
                }
                }



        }
        else{

            for(int i =n-1;i>=0;i--){
                    if(s[i]=='0'){
                        s[i]='2';
                        x++;
                        zero--;
                    }

                    if(x==n2 || zero==n0){
                        break;
                    }
                }

        }



    }




        if(one<n1){


            int x = one;

            if(two>n2){

                for(int i =0;i<n;i++){
                    if(s[i]=='2'){
                        s[i]='1';
                        x++;
                        two--;
                    }

                    if(x==n1 || two==n2){
                        break;
                    }
                }

                if(x!=n1){
                    for(int i =n-1;i>=0;i--){
                    if(s[i]=='0'){
                        s[i]='1';
                        x++;
                        zero--;
                    }

                    if(x==n1 || zero==n0){
                        break;
                    }
                }
                }

            }
            else{

                for(int i =n-1;i>=0;i--){
                    if(s[i]=='0'){
                        s[i]='1';
                        x++;
                        zero--;
                    }

                    if(x==n1 || zero==n0){
                        break;
                    }
                }

            }


        }





    cout<<s<<endl;



       }


}
