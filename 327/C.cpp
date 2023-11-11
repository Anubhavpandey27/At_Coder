#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
bool rw(vector<vector<int> >vec){
    vector<int> v(10,0);
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            int ele=vec[i][j];
            v[ele]+=1;
            if(v[ele]>i+1){
               return false;
            }
        }
    }
    return true;
}
bool cl(vector<vector<int> >vec){
    vector<int> v(10,0);
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            int ele=vec[j][i];
            v[ele]+=1;
            if(v[ele]>i+1){
               return false;
            }
        }
    }
    return true;
}
bool grid(vector<vector<int> >vec,int a,int b){
    vector<int> v(10,0);
    for(int i=a;i<a+3;i++){
        for(int j=b;j<b+3;j++){
            int ele=vec[j][i];
            v[ele]+=1;
            if(v[ele]>1){
               return false;
            }
        }
    }
    return true;

}


int main(){
vector<vector<int>> vec;
for(int i=0;i<9;i++){
    vector<int> v;
    for(int j=0;j<9;j++){
        int k;
        cin>>k;
        v.push_back(k);
        
    }
    vec.push_back(v);

}

bool ans=true;
if(!rw(vec)){
    ans=false;
}
else if(!cl(vec)){
    ans=false;
}
vector<int> temp={0,3,6};
for(int i=0;i<3;i++){

    for(int j=0;j<3;j++){
        if(!grid(vec,temp[i],temp[j])){
            ans=false;
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
return 0;

}