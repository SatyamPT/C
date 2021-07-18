#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> pairSum(vector<int> arr,int sum){
    vector<int> res;
    unordered_set<int> s;
    for(int i=0;i<arr.size();i++){
        int x=sum-arr[i];
        auto z=s.end();
        cout<<*z<<endl;
        if(s.find(x)!=s.end()){
            

            res.push_back(x);
            res.push_back(arr[i]);
            return res;
        }
        s.insert(arr[i]);
    }
    return {};
}

int main(){
    vector<int> arr{10,5,2,3,-6,9,11};
    int S=4;
    auto p=pairSum(arr,S);
    if(p.size()==0){
        cout<<"No Pair Found";
    }else{
        cout<<p[0]<<","<<p[1];
    }
}