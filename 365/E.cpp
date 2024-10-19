#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
ll bin_pow(ll a,ll b){
    if(b==1){
        return a;
    }
    if(b==0){
        return 1;
    }
    return bin_pow(a,b/2)*bin_pow(a,(b+1)/2);
}
void helper(){
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
ll n;
cin>>n;
vector<ll>vec;
ll sm=0;
vec.emplace_back(0);
for(int i=0;i<n;i++){
     ll ele;
     cin>>ele;
     sm+=ele;

     vec.emplace_back(vec[i]^ele);
}
ll ans=0;
for(int i=0;i<32;i++){
    ll xo=bin_pow(2,i);
    
    ll a=0;
    ll b=0;
    for(int j=0;j<=n;j++){
             if((xo&vec[j])>0){
                a++;
             }
             else{
                b++;
             }
    }
    ans+=(xo)*(a*b);
}
cout<<ans-sm;

}