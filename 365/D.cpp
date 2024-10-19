#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
ll helper(char x){
    if(x=='R'){
        return 0;
    }
    if(x=='P'){
        return 1;
    }
    if(x=='S'){
        return 2;
    }
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
ll n;
cin>>n;
string s;
cin>>s;
vector<vector<ll>> dp(n+1,vector<ll>(3,0));

for(int i=n-1;i>=0;i--){
    ll cur=helper(s[i]);
    
    dp[i][(cur+1)%3]=1+max(dp[i+1][(cur)],dp[i+1][(cur+2)%3]);
    dp[i][cur]=max(dp[i+1][(cur+2)%3],dp[i+1][(cur+1)%3]);
}
ll cu=helper(s[0]);
cout<<max(dp[0][cu],dp[0][(cu+1)%3]);
}