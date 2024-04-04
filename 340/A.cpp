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
int a,b,d;
cin>>a>>b>>d;
int ans=a;
while(ans<=b){
    cout<<ans<<" ";
    ans+=d;
}

}