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
int n;
cin>>n;
ll sm=0;
vector<ll> vec;
for(int i=0;i<n;i++){
ll ele;

cin>>ele;
sm+=ele;
vec.emplace_back(ele);
}
ll md=1e8;

ll ans=0;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        ans+=((vec[i]+vec[j])%md);
    }

}
cout<<ans;

}