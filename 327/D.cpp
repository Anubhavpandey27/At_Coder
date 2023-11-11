#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
void helper(){
}

int main(){
int t;
cin>>t;
vector<pair<long long,long long> > vec;
for(int j=0;j<t;j++){
    long long l,r;
    cin>>l>>r;
    pair<long long ,long long> p;
    p.first=l;
    p.second=r;
    vec.emplace_back(p);

}
long long k;
cin>>k;
long long ans=0;
for(int i=0;i<vec.size();i++){
    if(k<=vec[i].second && k>=vec[i].first){
        ans=t-i;
        break;

    }
}
cout<<ans;

}