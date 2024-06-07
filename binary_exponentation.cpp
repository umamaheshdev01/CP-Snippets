#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define srt(v) sort(v.begin(),v.end())

ll power(ll a,ll b){
   
   if(b==0) return 1;

   ll  res = power(a,b/2);

   if(b&1) return res*res*a;
   return res*res;

}

ll itpower(ll a,ll b){
   
    ll res = 1;

    while(b){

        if(b&1) res*=a;
        
        a*=a;
        b>>=1;

    }

    return res;

}


int main(){


    ll a, b;
    cin>>a>>b;

    cout<<power(a,b)<<endl;
    cout<<itpower(a,b)<<endl;

    


}
