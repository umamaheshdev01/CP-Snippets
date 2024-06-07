#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define srt(v) sort(v.begin(),v.end())


void generateSubsets(vll k){

    ll n = k.size();
    ll total = 1<<n;

    for(int i =0;i<total;i++){
    
        for(int j=0;j<n;j++){

            if(i & (1<<j)){

                cout<<k[j]<<" ";

            }
        }

        cout<<endl;
    }
}


int main(){

    ll n;
    cin>>n;
    vll  f;

    for(int i=0;i<n;i++){

        ll  ff;
        cin>>ff;

        f.pb(ff);
          
    }

    generateSubsets(f);
}
