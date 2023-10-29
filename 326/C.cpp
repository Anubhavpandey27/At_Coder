#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
void helper(){
}

int main(){
long long t,m;
cin>>t>>m;
vector<long long> vec;
for(int j=0;j<t;j++){
long long k;
cin>>k;
vec.emplace_back(k);
}
sort(vec.begin(),vec.end());
long long ans=1;
for(int i=0;i<t-1;i++){
  long long as=1;
  for(int j=i+1;j<t;j++){
     if(vec[i]+m>vec[j]){
        as++;
     }
     else{
        break;
     }
     ans=max(ans,as);
  }
}
cout<<ans;

}