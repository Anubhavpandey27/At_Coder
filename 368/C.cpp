#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
ll hel(ll a ,ll b){
    return a-b*5;
}
ll div1(ll dividend, ll divisor)
{
    if (divisor == 1)
        return dividend;
 
    if (divisor == -1)
        return -dividend;
 
    // Declaring and Initialising
    // the variables.
    long long low = 0, high = (dividend), mid;
 
    // To store the Quotient.
    int quotient = 0;
 
    while (low <= high) {
 
        // Calculating mid.
        mid = low + (high - low) / 2;
 
        // To search in lower bound.
        if ((mid * divisor) > (dividend))
            high = mid - 1;
 
        // To search in upper bound.
        else {
            quotient = mid;
            low = mid + 1;
        }
    }
 
    // Checking the parity and
    // returning the Quotient.
    if ((dividend < 0 && divisor < 0
         || dividend > 0 && divisor > 0))
        return quotient;
    else
        return -quotient;
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
ll n;
cin>>n;
vector<ll>vec;
ll f=5;
ll ct=0;
for(int i=0;i<n;i++){

    ll ele;
    cin>>ele;
    if(ele==1){
        ct++;
    }
    else if(ele==2){
        if(ct==0){
            ct=2;
        }
        else if(ct%3==2){
            ct++;
        }
        else{
            ct+=2;
        }
    }
    else{
        if(ct%3==0){
            ll sm=div1(ele,5);
                sm*=3;
                ct+=sm;
            if(ele%5==2){
                ct+=2;
            }
            else if(ele%f==0){

            }
            else if(ele%5==1){
                ct++;
            }
            else{
                ct+=3;
            }
        }
        else if(ct%3==1){
            if(ele<=4){
                ct+=2;
            }
            else{
                ct+=2;
                ele-4;
                ll sm=div1(ele,5);
                sm*=3;
                ct+=sm;
            if(ele%5==2){
                ct+=2;
            }
            else if(ele%5==0){

            }
            else if(ele%5==1){
                ct++;
            }
            else{
                ct+=3;
            }
            }
        }
        else{
            if(ele<=3){
                ct+=1;
            }
            else{
                ct+=1;
                ele-3;
                ll sm=div1(ele,5);
                sm*=3;
                ct+=sm;
            if(ele%5==2){
                ct+=2;
            }
            else if(ele%5==0){
                
            }
            else if(ele%5==1){
                ct++;
            }
            else{
                ct+=3;
            }
            }

        }
    }
    
}
cout<<ct;


}