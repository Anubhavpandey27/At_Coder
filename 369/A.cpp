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
ll a,b;
cin>>a>>b;
if(a==b){
    cout<<1;
}
else if(abs(a-b)%2==0){
    cout<<3;
}
else{
    cout<<2;
}

}