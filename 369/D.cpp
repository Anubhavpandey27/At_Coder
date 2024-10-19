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
vector<ll> vec;
vector<vector<ll>>dp(n,vector<ll>(2,0));
for(int i=0;i<n;i++){
    ll ele;
    cin>>ele;
    vec.emplace_back(ele);

}
dp[n-1][0]=vec[n-1];
dp[n-1][1]=2*vec[n-1];
for(int i=n-2;i>=0;i--){
    
    dp[i][0]=max(dp[i+1][1]+vec[i],dp[i+1][0]);
    dp[i][1]=max(2*vec[i]+dp[i+1][0],dp[i+1][1]);
    if(i==0){
        dp[i][1]=dp[i+1][0];
    }
}
if(n==1){
    cout<<vec[0];
}
else{
cout<<max(dp[0][0],dp[0][1]);
}


}