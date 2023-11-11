#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
long long helper(long long s){
    long long ans=1;
    for(int i=0;i<s;i++){
        ans*=s;

    }
    return ans;
}

int main(){
long long t;
cin>>t;
long long ans=-1;

vector<long long> vec;
for(int i=1;i<=20;i++){
    vec.push_back(helper(i));
}
for(int i=0;i<=20;i++){
    if(vec[i]==t){
        ans=i+1;
        break;
    }
}

cout<<ans;

}