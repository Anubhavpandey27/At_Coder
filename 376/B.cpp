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
int n,k;
cin>>n>>k;
vector<int> vis(n,-1);
int r=2;
int l=1;
vis[0]=1;
vis[1]=1;
int ans=0;
for(int i=0;i<k;i++){
    char y;
    int z;
    cin>>y>>z;
   if(y=='R'){
    if(r<=z){
        if(l>r && l<z){
            ans+=(r+n-z);
            r=z;

        }
        else{ 
            ans+=(z-r);
            r=z;

        }
    }
    else{
        if(l<r && l>z){
            ans+=(z+n-r);
            r=z;

        }
        else{ 
            ans+=(r-z);
            r=z;

        }

    }
   }
   else{
    if(l<=z){
        if(r>l && r<z){
            ans+=(l+n-z);
            l=z;

        }
        else{ 
            ans+=(z-l);
            l=z;

        }
    }
    else{
        if(r<l && r>z){
            ans+=(z+n-l);
            l=z;

        }
        else{ 
            ans+=(l-z);
            l=z;

        }

    }

   }




}
cout<<ans;

}