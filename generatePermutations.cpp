#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define srt(v) sort(v.begin(),v.end())
#define print(v) for(auto x:v)cout<<x<<" "


void helper(vll &k,vll & permutation,vector<bool> &chosen){

    ll  n = k.size();

    if(permutation.size()==n){    
    print(permutation);
        cout<<endl;
    }

    for(ll i=0;i<n;i++)
    {
        if(!chosen[i])
        {
            chosen[i]=true;
            permutation.push_back(k[i]);

            helper(k,permutation,chosen);

            permutation.pop_back();
            chosen[i]=false;
        }



    }

}

void generatePermuatations(vll k){

    vector<bool> chosen(k.size(),false);
    vll permutation;

    helper(k,permutation,chosen);

}


void printAllPermutations(vll k){

    srt(k);

    do{
       print(k);
       cout<<endl;
    }while(next_permutation(k.begin(),k.end()));

}

int main(){

    ll n;
    cin>>n;
    vll k;



    for(int i=0;i<n;i++){

        ll f;
        cin>>f;
        k.push_back(f);

    }

    generatePermuatations(k);
    cout<<endl;
    printAllPermutations(k);

}
