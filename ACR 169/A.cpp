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
int t;
cin>>t;
vector<ll>A(t+1);
vector<ll> P(t+1);
vector<bool>check(t+1,false);
for(int j=1;j<=t;j++){
    ll element;
    cin>>element;
    A[j]=element;

}
for(int j=2;j<=t;j++){
    ll element;
    cin>>element;
    P[j]=element;

}
for(int i=2;i<=t;i++){
    if(P[i]==1){
        check[i]=true;
    }
}
for(int k=0;k<1000;k++){
for(int i=2;i<=t;i++){
    if(check[P[i]]==true){
        check[i]=true;
    }
    if(check[P[t-i+2]]==true){
        check[t-i+2]=true;
    }
}
}
ll sm=0;
for(int i=2;i<=t;i++){
    if(check[i]==true){
   sm+=A[i];
    }
}

if(A[1]==0 && sm==0){
    cout<<"0";
}
else if(sm>0){
    cout<<'+';
}
else if(sm==0 && A[1]>0){
    cout<<'+';
}
else{
    cout<<'-';
}

}