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
int a=min(t,9);
long long sum=0;
for(int j=0;j<a;j++){
    int k;
    cin>>k;
    if((j+1)*11<=k){
        sum+=2;
    }
    else if(j+1<=k){
        sum++;
    }


}
if(t>9){
    for(int i=9;i<t;i++){
        int k;
        cin>>k;
        if((i+1)%11==0){
            if(k>=i+1){
                sum+=2;;
            }
            else if(k>=(i+1)%10){
                sum++;
            }
        }
    }
}
cout<<sum;

}