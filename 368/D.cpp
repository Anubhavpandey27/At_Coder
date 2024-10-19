#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include<stack>
#include <math.h>
#include<queue>
#define ll long long
void helper(){
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int n,k;
cin>>n>>k;
vector<int> vec(n+1,0);
vector<int> vec1(n+1,0);
vector<vector<int>> edge(n+1);
for(int i=0;i<n-1;i++){
    int a,b;
    cin>>a>>b;
    edge[a].emplace_back(b);
    edge[b].emplace_back(a);
    vec[a]++;
    vec[b]++;

}
for(int i=0;i<k;i++){
int ele;
cin>>ele;
vec1[ele]=-1;
}
stack<int> st;

for(int i=1;i<=n;i++){
    if(vec[i]==1){
         st.push(i);
         vec[i]--;
    }
}
if(k==1){
     cout<<1;
}
else{
int ans=0;
while(st.size()>0){
    int temp=st.top();
    st.pop();
    if(vec1[temp]!=-1){
        ans++;
        for(int i=0;i<edge[temp].size();i++){
        if(vec1[edge[temp][i]]!=-1){
            vec[edge[temp][i]]--;
            if(vec[edge[temp][i]]==1){
             st.push(edge[temp][i]);

        }
        }
        
    }
    }
    
}
cout<<n-ans;
}


}