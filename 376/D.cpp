#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include<map>
#include<queue>
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
int n,m;
cin>>n>>m;
map<int,vector<int>> mp;
map<int,vector<int>> mp1;
for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    mp1[b].emplace_back(a);
    mp[a].emplace_back(b);
}
vector<int> vis(n+1,-1);
queue<int> q;
bool check=false;
int ans=1e8;
q.push(1);
vis[1]=0;
while(q.size()>0){
    int temp=q.front();
    for(int x:mp1[temp]){
        if(vis[x]==-1){
            vis[x]=vis[temp]+1;
            q.push(x);
        }
    }
    q.pop();

}
for(int x:mp[1]){
    if(vis[x]!=-1){
        ans=min(ans,vis[x]+1);
    }
}
if(ans==1e8){
    cout<<-1;
}
else{
    cout<<ans;
}


}