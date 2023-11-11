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
string s;
cin>>s;
bool ans=false;
for(int j=0;j<t-1;j++){
if(s[j]=='a'){
    if(s[j+1]=='b'){
        ans=true;
        break;
    }
}
if(s[j]=='b'){
    if(s[j+1]=='a'){
        ans=true;
        break;
    }
}

}
if(ans){
    cout<<"Yes";
}
else{
    cout<<"No";
}

}