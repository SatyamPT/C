#include<iostream>
#include<vector>
using namespace std;

vector<int> subArraySort(vector<int> arr){
    vector<int> res;
    int smallest=INT_MAX,largest=INT_MIN;
    int n=arr.size();
    if(!(arr[0]<=arr[1])){
        smallest=arr[0];
    }
    if(!(arr[n-1]>=arr[n-2])){
        largest=arr[n-1];
    }
    for(int i=1;i<n-1;i++){
        if(!(arr[i]>=arr[i-1] && arr[i]<=arr[i+1])){
            smallest=min(arr[i],smallest);
            largest=max(arr[i],largest);
        }
    }
    if(smallest==INT_MAX){
        return {-1,-1};
    }
    if(smallest<arr[0]){
        res.push_back(0);
    }else{
        for(int i=0;i<n-1;i++){
            if(smallest>=arr[i] && smallest<arr[i+1]){
                res.push_back(i+1);
                break;
            }
        }
    }
    if(largest>arr[n-1]){
        res.push_back(n-1);
    }else{
        for(int i=n-1;i>=1;i--){
            if(largest>arr[i-1] && largest<=arr[i]){
                res.push_back(i-1);
            }
        }
    }
    return res;
}

int main(){
    vector<int> arr{1,2,3,4,5,6,7,8,9,10,11};
    auto ans=subArraySort(arr);
    cout<<ans[0]<<","<<ans[1];
}