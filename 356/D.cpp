#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
ll md=998244353;
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
long long  binary_exp(long long a, long long b){
    if(b==0){
        return 1;
    }
    long long ex=binary_exp(a,b/2);
    if((b&1)==1){
        
        return ex*ex*a;
    }
    else{
        return ex*ex;

    }
}
int helper(ll n,ll pos){

          ll temp=binary_exp(2,pos+1);
          ll temp2=binary_exp(2,pos);
          if(n<temp2){
            return 0;
          }
          n=n-temp2+1;
          ll ans=0;
          ll test=n/temp;
          ans+=((n/temp)*temp2);
          ans%=md;
          pos++;
          
          ans+=min(temp/2,n-(test*temp));
          ans%=md;
          return ans;

}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
ll md=998244353;
ll n,m;
ll ans=0;
cin>>n>>m;
int i=0;
while(m>0){
    if((m&1)==1){
     ans+=helper(n,i);
     ans%=md;
    }
    m/=2;
    i++;
}
cout<<ans;


}