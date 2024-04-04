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
vector<ll> vec;
while(t){
    ll a,b;
    cin>>a>>b;
    if(a==1){
        vec.emplace_back(b);
    }
    else{
        cout<<vec[vec.size()-b]<<"\n";
    }


 t--;}

}