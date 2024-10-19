#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
ll solve(vector<ll>& vec,ll x){
    ll out=0;
    for(int i=0;i<vec.size();i++){
        out+=min(vec[i],x);
    }
    return out;
}
void helper(ll st,ll ed, ll &ans,ll &m,vector<ll>&vec){
    if(ed<st){
        return;
    }
    ll md=(ed-st)/2+st;
    ll temp=solve(vec,md);
    if(temp<=m){
        ans=max(ans,md);
        helper(md+1,ed,ans,m,vec);
    }
    else{
        helper(st,md-1,ans,m,vec);
    }
          
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
ll n,m;
cin>>n>>m;
vector<ll>vec;
ll sm=0;
for(int i=0;i<n;i++){
ll ele;

cin>>ele;
sm+=ele;
vec.emplace_back(ele);
}
if(sm<=m){
    cout<<"infinite";
}
else{
   ll ans=0;
   helper(0,m,ans,m,vec);
   cout<<ans;
}

}