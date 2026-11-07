#include <iostream>
#include <vector>
using namespace std;

void bubblesort(vector<int> &arr,int n){
    
    if(n==1) 
       return;
    for(int i = 0;i<=n-2;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubblesort(arr,n-1);
}

int main(){
vector<int> arr ={12,3,45,56,43};
int n = arr.size();
bubblesort(arr,n);
for(int val : arr){
    cout << val <<  " ";
}
return 0;
}