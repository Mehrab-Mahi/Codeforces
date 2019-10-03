#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);


using namespace std;

int main()
{
    optimize ;

    ll a,b,f,k,mov=0,fuel=0,rem=0;
    cin>>a>>b>>f>>k;
    rem = b;
    int m = 0;

    for(int i = 1;i<=k;i++){
        if(i%2==1){
            if(((2*a)-f)<=rem && i!=k){
                mov++;
                rem = rem - a;
               // cout<<i<<"   ----   "<<rem<<endl;
            }
            else if((rem>=f) && (2*(a-f))<=b && i!=k){
                mov++;
                fuel++;
                rem = b - (a-f);
                //cout<<i<<"   ----   "<<rem<<endl;
            }
            else if(i==k){
                if(i==1){
                    if(rem>=a)
                        m = 0;
                    else if((a-f)<=b && f<=b)
                        fuel++;
                    else
                        m = 1;
                }
                else if(rem>=a)
                    mov++;
                else
                    fuel++;
            }
            else{
                m = 1;
                break;
            }
        }
        else{
            if(((a+f))<=rem && i!=k){
                mov++;
                rem = rem - a;
                //cout<<i<<"   ----   "<<rem<<endl;
            }
            else if((a-f)<=rem  &&  (2*f)<=b && i!=k){
                mov++;
                fuel++;
                rem = b - f;
                //cout<<i<<"   ----   "<<rem<<" "<<fuel<<endl;
            }
            else if(i==k){
                    if(i==1){
                    if(rem>=a)
                        m = 0;
                    else if((a-f)<=b)
                        fuel++;
                    else
                        m = 1;
                }
                 else if(rem>=a)
                    mov++;
                else
                    fuel++;
            }
            else{
                m = 1;
                break;
            }
        }
    }

    if(m==1)
        cout<<-1<<endl;
    else
        cout<<fuel<<endl;
}
