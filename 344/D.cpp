#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
int helper(string s,int it,int sm,vector<vector<string>> vec,int n,int pt){
    if(pt==s.size()){
      return sm;
    }
   if(it>=n){
    return 1e3;
   }
   int ans=1e3;
   for(int i=0;i<vec[it].size();i++){
    int sz=vec[it][i].size();
    if(s.substr(pt,sz)==vec[it][i]){
        if(s.size()-pt==sz){
            return sm+1;
        }
       ans=min(ans, helper(s,it+1,sm+1,vec,n,pt+sz));
    }
   }
   ans=min(ans,helper(s,it+1,sm,vec,n,pt));
   return ans;
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
string s;
cin>>s;
vector<vector<string>> vec;
int n;
cin>>n;
vector<vector<int>> dp(n,vector<int>(s.size(),-1));
for(int i=0;i<n;i++){
    int m;
    cin>>m;
    vector<string> v;
    for(int j=0;j<m;j++){
        string s1;
        cin>>s1;
        v.push_back(s1);
    }
    vec.push_back(v);
}
int ans=helper(s,0,0,vec,n,0);
if(ans>1000){
    cout<<-1;
}
else{
    cout<<ans;
}

}