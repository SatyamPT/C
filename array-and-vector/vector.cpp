#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> arr={1,4,7,10,12};

    //insert an element
    arr.push_back(15);

    //delete an element
    arr.pop_back();

    //diplaying all elements
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    /*

    //size of vector
    cout<< arr.size() << endl;

    //capacity of vector
    cout<< arr.capacity() <<endl;
    */

} 

