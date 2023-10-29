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
for(int j=t;j<1000;j++){
int ones=j%10;
int tens=(j/10)%10;
int hund =j/100;
if(hund*tens==ones){
    cout<<j;
    break;
}
}

}