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
int t;
cin>>t;
while(t){
    ll x;
    cin>>x;
    ll b=x%11;
    x-=b*111;
    if(x%11==0 && x>=0){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }




 t--;}

}