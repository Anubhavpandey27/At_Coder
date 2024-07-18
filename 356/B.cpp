#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
void helper(){
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
ll n,m;
cin>>n>>m;
vector<ll> nut;
for(int i=0;i<m;i++){
    ll ele;
    cin>>ele;
    nut.emplace_back(ele);
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        ll ele;
        cin>>ele;
        nut[j]-=ele;
    }
}
bool ans=true;
for(int i=0;i<m;i++){
    if(nut[i]>0){
        ans=false;
    }
}
if(ans){
    cout<<"Yes";
}
else{
    cout<<"No";
}

}