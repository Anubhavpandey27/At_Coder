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
ll t,k;
cin>>t>>k;
vector<ll> vec;
for(int j=0;j<k;j++){
ll ele;
cin>>ele;
vec.emplace_back(ele);
}
ll ans=0;
if(k%2==0){
    sort(vec.begin(),vec.end());
    for(int i=0;i<k;i+=2){
     ans=ans+abs(vec[i]-vec[i+1]);
    }

}
else{
    ll temp=0;
    sort(vec.begin(),vec.end());
    for(int i=0;i<k;i+=2){
     temp=temp+abs(vec[i]-vec[i+1]);
    }
    

}

}