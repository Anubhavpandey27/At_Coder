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
int n;
cin>>n;
vector<int>vec;
for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    vec.emplace_back(ele);
}


int ct=0;
while(true){
sort(vec.begin(),vec.end());
if(vec[n-2]<=0){
    break;
}
else{
    vec[n-1]--;
    vec[n-2]--;
    ct++;
}
}
cout<<ct;

}