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
int n;
cin>>n;
if(n%4!=0){
    cout<<365;
}
else if(n%4==0 && n%100!=0){
    cout<<366;
}
else if(n%100==0 && n%400!=0){
    cout<<365;
}
else if(n%400==0){
    cout<<366;
}

}