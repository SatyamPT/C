#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> triplet(vector<int> arr,int sum){
    vector<vector<int>> res;
    sort(arr.begin(), arr.end());
    for(int i=0;i<arr.size()-2;i++){
        int x=sum-arr[i];
        int s=i+1;
        int e=arr.size()-1;
        while(s<e){
            if(arr[s]+arr[e]==x){
                res.push_back({arr[i],arr[s],arr[e]});
                s++;
                e--;
            }else if(arr[s]+arr[e]<x){
                s++;
            }else{
                e--;
            }
        }
    }
    return res;
}

int main(){
    vector<int> arr{1,2,3,4,5,6,7,8,9,15};
    int s=18;
    vector<vector<int>> ans=triplet(arr,s);
    for(auto y:ans){
        for(int x:y){
            cout<<x<<",";
        }
        cout<<endl;
    }
}