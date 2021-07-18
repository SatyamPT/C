#include<iostream>
#include<vector>
using namespace std;

int waterTrap(vector<int> arr){
    int n=arr.size();
    vector<int> left(n);
    vector<int> right(n);
    left[0]=arr[0];
    for(int i=1;i<n;i++){
        left[i]=(max(left[i-1],arr[i]));
    }
    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=(max(arr[i],right[i+1]));
    }
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=min(left[i],right[i])-arr[i];
    }
    return sum;
}

int main(){
    vector<int> arr{0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<waterTrap(arr);
}