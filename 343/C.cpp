#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include<set>
#define ll long long
void helper(){
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int h,w,n;
cin>>h>>w>>n;
string t;
cin>>t;
vector<string> vec;
for(int i=0;i<h;i++){
    string s;
    cin>>s;
    vec.push_back(s);
}

int ans=0;

for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
     int a,b;
     a=i;
     b=j;
     bool abc=true;
     if(vec[i][j]=='#'){
        continue;
     }
            
        
      for(int k=0;k<n;k++){
        char c=t[k];
        
       
       
        if(c=='L'){
            b--;

        }
        if(c=='R'){
            b++;
        }
        if(c=='U'){
            a--;
        }
         if(c=='D'){
            a++;
        }
        if(vec[a][b]=='#' ){
            abc=false;
            break;
        }
       
        
        
      }
      if(abc){
        ans++;
      }
     
    }
}

cout<<ans;

}