#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
void helper(){
}

int main(){
long long t,x;
cin>>t>>x;
long long sum=0;
for(int j=0;j<t;j++){
    long long k;
    cin>>k;
    if(k<=x){
        sum+=k;
    }

}
cout<<sum;

}