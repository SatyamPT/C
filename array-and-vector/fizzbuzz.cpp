#include<iostream>
#include<vector>

using namespace std;

vector<string> fizzbuzz(int n){
    vector<string> arr;
    for(int i=1;i<=n;i++){
        if(i%15==0){
            arr.push_back("fizzbuzz");
        }else if(i%3==0){
            arr.push_back("fizz");
        }else if(i%5==0){
            arr.push_back("buzz");
        }else{
            arr.push_back(to_string(i));
        }
    }
    return arr;
}

int main(){
    vector<string> arr=fizzbuzz(15);
    for(string x:arr){
        cout<<x<<",";
    }

}

