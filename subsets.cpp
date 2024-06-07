#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define srt(v) sort(v.begin(),v.end())


void helper(vll k,vll & subset,ll i){

    if(i==k.size()){
         
         for(auto x:subset){
            cout<<x<<" ";
         }

         cout<<endl;
         return;

    }

    subset.push_back(k[i]);
    helper(k,subset,i+1);

    subset.pop_back();
    helper(k,subset,i+1);
    
}


void generateSubsets(vll k){

   vll subset;
   
   helper(k,subset,0);

}



int main(){
   
   ll n;
   cin>>n;
   vll p;

   for(int i=0;i<n;i++){
     ll k;
     cin>>k;

     p.push_back(k);
   }

   generateSubsets(p);

}
