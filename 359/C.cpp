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
ll ans=0;
ll a,b,c,d;
cin>>b>>a>>d>>c;
ll up=abs(a-c);
ans+=up;
ll temp=0;
bool on=false;
if(b==d){
    on=true;
}
bool some=false;
if(a==c && abs(d-b)<=1){
    if(b==d){
        cout<<0;
    }
    else if(a&1){
        if((b&1) && b<d){
        cout<<0;
    }
    else{
        cout<<1;
    }
    }
    else{
if((b&1) && b>d){
cout<<0;
    }
    else{
        cout<<1;
    }
    }
    some=true;
    
}
else if(b>d){
    if(!(b&1) && !(a&1) ){
        b--;
    }
    else if (b&1 && a&1){
        b--;
    }
    if((d&1) &&!(c&1)){
        d++;
    }
    else if(!(d&1) && (c&1)){
        d++;
    }
       ll dif=abs(b-d)-up;
     temp=dif/2;
    if(dif&1){
       
        temp++;
    }
  

}
else if(d>b){
    if(!(d&1) && !(c&1) ){
        d--;
    }
    else if (d&1 && c&1){
        d--;
    }
    if((b&1) &&!(a&1)){
        b++;
    }
    else if(!(b&1) && (a&1)){
        b++;
    }
    ll dif=abs(b-d)-up;
     temp=dif/2;
    if(dif&1){
       
        temp++;
    }
}
if(some){

}
else if(ans>=abs(d-b) || on){
    cout<<ans;
}
else{
ans+=temp;
cout<<ans;
}


}