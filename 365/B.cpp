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
vector<ll>vec1;
vector<ll> vec2;
while(t){
ll ele;
cin>>ele;
vec1.emplace_back(ele);
vec2.emplace_back(ele);
 t--;}
 sort(vec1.begin(),vec1.end());
 ll tar=vec1[vec1.size()-2];
for(int i=0;i<vec1.size();i++){
    if(vec2[i]==tar){
        cout<<i+1;
    }
}
}