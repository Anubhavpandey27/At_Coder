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
vector<ll> a,s,t;
for(int i=0;i<n;i++){
    ll ele;
    cin>>ele;
    a.emplace_back(ele);
}
for(int i=0;i<n-1;i++){
    ll ele;
    ll ele2;
    cin>>ele>>ele2;
   ll q=a[i]/ele;
   q*=ele2;
    a[i+1]+=q;
}
cout<<a[n-1];

}