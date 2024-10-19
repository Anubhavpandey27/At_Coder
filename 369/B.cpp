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
vector<ll> vec1;
vector<ll> vec2;
for(int i=0;i<n;i++){
    ll ele;
    char hand;
    cin>>ele>>hand;
    if(hand=='L'){
        vec1.emplace_back(ele);
    }
    else{
        vec2.emplace_back(ele);
    }
}
ll ans=0;
for(int i=1;i<vec1.size();i++){
    ans+=abs(vec1[i-1]-vec1[i]);
}
for(int i=1;i<vec2.size();i++){
    ans+=abs(vec2[i-1]-vec2[i]);
}
cout<<ans;

}