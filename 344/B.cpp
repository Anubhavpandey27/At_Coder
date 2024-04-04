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
vector<ll> vec;
while(true){
ll n;
cin>>n;
vec.emplace_back(n);
if(n==0){
    break;
}
 }
 for(int i=vec.size()-1;i>=0;i--){
    cout<<vec[i]<<"\n";
 }

}