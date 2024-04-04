#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>
#define ll long long
void helper(){
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(0);
vector<ll> a,b,c;
int n,m,l;
cin>>n;
for(int i=0;i<n;i++){
    ll ele;
    cin>>ele;
    a.emplace_back(ele);
}
cin>>m;
for(int i=0;i<m;i++){
    ll ele;
    cin>>ele;
    b.emplace_back(ele);
}
cin>>l;
for(int i=0;i<l;i++){
    ll ele;
    cin>>ele;
    c.emplace_back(ele);
}
map<int,bool> mp;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        for(int k=0;k<l;k++){
              mp[a[i]+b[j]+c[k]]=true;
        }
    }
}
ll q;
cin>>q;
for(ll i=0;i<q;i++){
    ll ele;
    cin>>ele;
    if(mp[ele]){
        cout<<"Yes"<<"\n";
    }
    else{
        cout<<"No"<<"\n";
    }
}

}