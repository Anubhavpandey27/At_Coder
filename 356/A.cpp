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
int n,l,r;
cin>>n>>l>>r;
for(int i=1;i<l;i++){
    cout<<i<<" ";
}
for(int i=r;i>=l;i--){
    cout<<i<<" ";
}
for(int i=r+1;i<=n;i++){
    cout<<i<<" ";
}

}