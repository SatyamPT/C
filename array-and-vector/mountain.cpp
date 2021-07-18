#include<iostream>
#include<vector>
using namespace std;

int highestMountain(vector<int> arr){
    int largest=0;
    for(int i=1;i<arr.size()-1;){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            int cnt=1;
            int j=i;
            //count backwards (left)
            while(j>=1 && arr[j]>arr[j-1]){
                cnt++;
                j--;
            }

            //count forwards (right)
            while(i<arr.size()-1 && arr[i]>arr[i+1]){
                cnt++;
                i++;
            }

            largest=max(largest,cnt);


        }else{
            i++;
        }
    }
    return largest;
}

int main(){
    vector<int> arr{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};

    cout<<highestMountain(arr);
}