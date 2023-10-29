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
vector<pair<int,int>> vec;
vector<long long> people(17,0);

for(int j=0;j<t;j++){
int k;
cin>>k;
pair<int,int> p;
p.first=k;
vec.push_back(p);

}
for(int j=0;j<t;j++){
int k;
cin>>k;
vec[j].second=k;


}
int z=8;
for(int i=0;i<t;i++){
    z=8;
    while(z<=24){
    if(vec[i].second>=z-8 && vec[i].second<=z){
        people[z-8]=people[z-8]+vec[i].first;
        
    }
    z++;
    }
}
//sort(people.begin(),people.end());
cout<<people[0];

return 0;

}