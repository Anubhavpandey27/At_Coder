#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
void helper(){
}
ll binarySearch(vector<ll> arr, ll low, ll high, ll x) 
{ 
    ll mid;
    while (low <= high) { 
         mid = low + (high - low) / 2; 
  
        // If the middle element is equal to 'x', we have 
        // found the element, return its index 
        if (arr[mid] == x) 
            return mid+1; 
  
        // If the middle element is smaller than 'x', search 
        // in the right half of the array 
        if (arr[mid] < x) 
            low = mid + 1; 
  
        // If the middle element is greater than 'x', search 
        // in the left half of the array 
        else
            high = mid - 1; 
    } 
  
    // If the base case is reached, the element is not 
    // present in the array, return -1 
    return low; 
} 
 

int main(){
ll t,q;
cin>>t>>q;
vector<ll> vec;
ll prev=0;
for(int j=0;j<t;j++){
 ll ele;
 cin>>ele;
 vec.emplace_back(ele+prev);
 prev=vec[j];
}
for(int i=0;i<q;i++){
    ll x;
    cin>>x;
    cout<<binarySearch(vec,0,t-1,x)<<"\n";
}



}