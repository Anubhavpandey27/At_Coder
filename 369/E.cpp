#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long

void helper(vector<vector<ll>>&matrix)
{
  int rows = matrix.size();
  int columns = matrix[0].size();
  
       for( int k =0; k<rows; k++)
       {
           for(int i =0; i<rows; i++)
           {
               for(int j =0; j<columns; j++)
               {
                   ll x = matrix[i][k];
                   ll y = matrix[k][j];
                   if(x!=-1 && y!=-1)
                   {
                      if(matrix[i][j] == -1 || x+y <matrix[i][j])
                      matrix[i][j] = x+y; 
                   }
                   
               }
           }
       }
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
ll n,m;
cin>>n>>m;
vector<vector<ll>>vec(n,vector<ll>(n,-1));
for(int i=0;i<m;i++){
    ll a,b,t;
    cin>>a>>b>>t;
    a--;
    b--;
    if(vec[a][b]==-1){
        vec[a][b]=t;
        vec[b][a]=t;
    }
    else{
vec[a][b]=min(vec[a][b],t);
    vec[b][a]=min(vec[b][a],t);
    }
    
    
}
helper(vec);
ll q;
cin>>q;
for(int i=0;i<q;i++){
    int k;
    cin>> k;
    for(int j=0;j<k;j++){
        ll ele;
        cin>>ele;
        ele--;
        cout<<vec[0][ele]+vec[n-1][ele]<<" ";
    }
    cout<<"\n";
}




}