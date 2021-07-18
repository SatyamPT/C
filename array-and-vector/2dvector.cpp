#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector< vector<int> > arr={
        {1,2,3},
        {2,4,6},
        {5,7,9,3},
        {7,4}
    };

    //print all elements
    for(int i=0;i<arr.size();i++){
        for(int x:arr[i]){
            cout<<x<<",";
        }
        cout<<endl;
    }
}