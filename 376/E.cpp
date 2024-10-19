#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
void helper(){
}
vector<ll>input(int n){
  
    vector<ll>vec;
    for(int i=0;i<n;i++){
      ll ele;
      cin>>ele;
      vec.emplace_back(ele);
    }
    return vec;
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t){
    int n,k;
    cin>>n>>k;
    vector<pair<ll,ll>> a;
    vector<pair<ll,ll>> b;

    for(int i=0;i<n;i++){
        ll ele;
        cin>>ele;
        a.push_back({ele,i});

    }
    for(int i=0;i<n;i++){
        ll ele;
        cin>>ele;
        b.push_back({ele,i});

    }
    sort(a.begin(),a.end());
    ll sm=0;
    ll mx=a[0].first;
    for(int  i=0;i<k;i++){
      mx=max(mx,a[i].first);
      sm+=b[a[i].second].first;
    }
    cout<<mx*sm<<"\n";

 t--;}

}