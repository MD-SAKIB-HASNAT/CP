#include<bits/stdc++.h>
using namespace std;

typedef int                       li;
typedef long long int             ll;
typedef unsigned long long int    ul;
typedef double                    db;

//---------------------------------------------------------------------------------

typedef vector < li >                   vli;
typedef vector < ll >                   vll;
typedef set < li >                      sli;
typedef set < ll >                      sll;
typedef pair < pair<li, li>, li>        pli;
typedef pair < ll, ll >                 pll;
typedef map < li,li >                   mli;
typedef map < ll,ll >                   mll;
typedef vector < pair < li, li > >      vpi;
typedef vector < pair < ll, ll > >      vpl;
typedef priority_queue<li>              pqi;
typedef priority_queue<ll>              pql;

//----------------------------------------------------------------------------------
ll t;
#define Fast                      ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define tc                        ll T;cin>>T; for(t=1; t<=T; t++)
#define inp_(a,n)                 for(int i=0; i<n ;i++) cin>>a[i];
#define loop_(a,n)                for(int i=0; i<n ;i++)
#define loop(i,a,b)               for(int i=a;i<b;++i)
#define rloop(i,a,b)              for(int i=a-1;i>=b;i--)
#define yes                       cout<<"YES"<<endl;
#define no                        cout<<"NO"<<endl;
#define srt(x)                    sort(x.begin(),x.end());
#define rvrs(x)                   reverse(x.begin(),x.end());
#define mns                       cout<<-1<<endl;
#define pb(x)                     push_back(x);
#define F                         first
#define S                         second

ll Euler_totient(int n){

    ll ans=n; //formula :  ans = n*(pi-1/pi)

    // prime factorization
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            int pow=0;
            while(n%i==0){
                pow++;
                n/=i;
            }
            //cout<<i<<"^"<<pow<<endl;
            ans*=(i-1);
            ans/=i;
        }
    }
    if(n>1) {
        //cout<<n<<"^"<<1<<endl;
        ans*=(n-1);
        ans/=n;
    }
    return ans;
}

void solve(){
    int n;
    cin>>n;
    ll res = Euler_totient(n);
    cout<<res<<endl;
}

int main(){
    Fast
    tc
    solve();
}

