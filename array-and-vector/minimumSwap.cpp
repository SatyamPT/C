#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minimumSwap(vector<int> arr){
    int n=arr.size();
    pair<int,int> ap[n];
    for(int i=0;i<n;i++){
        ap[i].first=arr[i];
        ap[i].second=i;
    }
    sort(ap,ap+n);

    vector<bool> visited(n,false);
    int swap=0;

    for(int i=0;i<n;i++){

        int oldPosition=ap[i].second;
        if(visited[i]==true or oldPosition==i){
            continue;
        }

        int node=i;
        int cycle=0;
        while(!visited[node]){
            visited[node]=true;
            int nextNode=ap[i].second;
            node=nextNode;
            cycle += 1;
        }
        swap += (cycle - 1);
    }
    return swap;
}

int main(){
    vector<int> arr{5,4,3,2,1};
    cout<<minimumSwap(arr);
}