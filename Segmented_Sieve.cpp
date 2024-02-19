
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx=100005;
bool prime[mx];
vector<ll>v;
void seive(){
     memset(prime, true, sizeof(prime));
     prime[0]=false;
     prime[1]=false;
     for(ll i=2; i*i<=mx; i++){
         if(prime[i]){
             for(ll j=i*i; j<=mx; j+=i){
                    prime[j]=false;
             }
         }
     }
     for(ll i=0; i<=mx; i++){
         if(prime[i]){
             v.push_back(i);
         }
     }
}
int main(){
 seive();
 int t;
 cin>>t;
 while(t--){
     ll L,R;
     cin>>L>>R;

     if(L==1) L++;
      ll mx=R-L+1;
     vector<int> cv(mx+1);
     for(int i=0; i<mx; i++) cv[i]=0;
     ll limit=sqrt(R);
     for(auto u:v){
         if(u<=limit){
             int x=(L/u)*u;
             if(x<L) x+=u;
             for(int i=x; i<=R; i+=u){
                if(i!=u) cv[i-L]=1;
             }
         }
         else break;
    }
    for(int i=0; i<mx; i++){
            if(!cv[i]) cout<<L+i<<endl;
    }

    }

 return 0;
}
