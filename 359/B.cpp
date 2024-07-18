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
t*=2;
int ans=0;
vector<int> vec;
for(int i=0;i<t;i++){
int ele;
cin>>ele;
vec.emplace_back(ele);
if(i>=2){
    if(vec[i-2]==ele){
        ans++;
    }
}
}
cout<<ans;

}