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
int f;
cin>>f;
int ans=-1;
bool ch=true;
for(int i=2;i<=t;i++){
int ele;
cin>>ele;
if(ch){
    if(ele>f){
        ans=i;
        ch=false;
    }
}
}
cout<<ans;

}