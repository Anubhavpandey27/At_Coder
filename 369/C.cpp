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
ll n;
cin>>n;
vector<ll>vec;
for(int i=0;i<n;i++){
    ll ele;
    cin>>ele;
    vec.emplace_back(ele);
}
ll ans=n+n-1;
ll temp=2;
for(int i=1;i<n-1;i++){
    if(vec[i]-vec[i-1]==vec[i+1]-vec[i]){
        temp++;
    }
    else{
        if(temp>=3){
            ans+=(temp*(temp+1)/2-temp-temp+1);
            temp=2;
        }
    }

}
if(temp!=2){
    ans+=(temp*(temp+1)/2-temp-temp+1);
            temp=2;

}
cout<<ans;

}