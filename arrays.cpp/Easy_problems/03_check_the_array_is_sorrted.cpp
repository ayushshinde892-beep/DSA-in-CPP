#include<iostream>
#include<vector>
using namespace std;
bool isSorted(const vector<int> &arr, int n){
    if(n <= 1) return true;
    for(int i = 0; i + 1 < n; ++i){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> arr = {1,2,1,4,5};
    int n = arr.size();
    cout << (isSorted(arr, n) ? "True" : "False");

    return 0;
}
