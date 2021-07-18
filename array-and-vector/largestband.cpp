#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int largestBand(vector<int> arr){
    unordered_set<int> s;
    int largest=0;
    for(int x:arr){
        s.insert(x);
    }
    for(int i=0;i<s.size();i++){
        int cnt=1;
        if(s.find(arr[i]-1)!=s.end()){
            continue;
        }else{
            int j=arr[i];
            while(s.find(j+1)!=s.end()){
                cnt++;
                j++;
            }
            largest=max(largest,cnt);
        }
    }
    return largest;
}

int main(){
    vector<int> arr{1,9,3,0,18,5,2,4,10,7,12,6};
    cout<<largestBand(arr);
}