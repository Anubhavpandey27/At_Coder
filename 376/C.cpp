#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
void helper(){
}
vector<ll>input(int n){
  
    vector<ll>vec;
    for(int i=0;i<n;i++){
      ll ele;
      cin>>ele;
      vec.emplace_back(ele);
    }
    return vec;
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int n;
cin>>n;
vector<ll> a=input(n);
vector<ll> b=input(n-1);
sort(a.begin(),a.end());
sort(b.begin(),b.end());
int i=n-1;
int j=n-2;
int ans=-1;
bool check=false;

while(j>=0){
    if(b[j]>=a[i]){
        j--;
        i--;
    }
    else{
        if(ans==-1){
            ans=a[i];
            i--;
        }
        else{
            check=true;
            break;
        }
    }

}
if(ans==-1)
{
    ans=a[0];
}
if(check){
    cout<<-1;
}
else{
    cout<<ans;
}

}