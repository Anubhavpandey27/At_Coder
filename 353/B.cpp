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

int t,n;
cin>>n>>t;
int sm=0;
int ans=0;
for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    if(sm+ele>t){
        sm=ele;
        ans++;
    }
    else{
        sm+=ele;
    }
    }

cout<<ans+1;

}