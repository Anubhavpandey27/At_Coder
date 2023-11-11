#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
void helper(){
}

int main(){
long long t,q;
cin>>t>>q;
string s;
cin>>s;
s='1'+s;
vector<long long> vec(t+1,0);
for(int i=1;i<t;i++){
    if(s[i]==s[i+1]){
        vec[i]=vec[i-1]+1;
    }
    else{
        vec[i]=vec[i-1];
    }
}
vec[t]=vec[t-1];

for(int j=0;j<q;j++){
    long long l,r;
    cin>>l>>r;
    int p=0;
    cout<<vec[r-1]-vec[l-1]<<endl;

}

}