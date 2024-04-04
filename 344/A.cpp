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
string s;
cin>>s;
bool pri=true;
for(int i=0;i<s.size();i++){
    if(s[i]=='|'){
        if(pri){
            pri=false;
        }
        else{
            pri=true;
        }
    }
    else if(pri){
       cout<<s[i];
    }
}


}