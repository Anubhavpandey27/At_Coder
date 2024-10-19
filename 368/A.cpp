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
int n,k;
cin>>n>>k;
vector<int> vec;
for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    vec.emplace_back(ele);

}
for(int i=n-k;i<n;i++){
    cout<<vec[i]<<" ";
}
for(int i=0;i<n-k;i++){
    cout<<vec[i]<<" ";
}

}