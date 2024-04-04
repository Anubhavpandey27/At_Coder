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
ll a,m,l,r;
cin>>a>>m>>l>>r;

if(a==l && a==r){
    cout<<1;
}
else if(l==r && l!=a){
    cout<<0;
}

else if(a<=l && a<=r){
     l=abs(a-l);
r=abs(a-r);
 l=l/m;
    r=r/m;
    cout<<abs(r-l);
    
    
}
else if(a>r && a>l){
     l=abs(a-l);
r=abs(a-r);
 l=l/m;
    r=r/m;
    
    cout<<abs(r-l);

}
else{
     l=abs(a-l);
r=abs(a-r);
 l=l/m;
    r=r/m;
   
    
    cout<<l+r+1;
}



}