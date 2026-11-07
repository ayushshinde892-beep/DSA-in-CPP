#include<iostream>
#include<vector>
using namespace std;
int slargest(vector<int> &arr , int n){
    int largest = arr[0];
    int slargest = INT16_MIN;
    for (int i = 0;  i < arr.size();i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > largest){
            slargest= arr[i];
        }
    }

    return slargest;

}
int ssmallest(vector<int> &arr , int n){
    int smallest = arr[0];
    int ssmallest=INT16_MAX;
    for(int i =0 ; i < arr.size();i++){
      if(arr[i]<smallest){
        ssmallest = smallest;
        smallest = arr[i];
      }
      else if(arr[i]!= smallest && arr[i]<ssmallest){
        ssmallest = arr[i];
      }
    }
    return ssmallest;
}

int main(){
    vector<int> arr={11,23,55,67,7,2,90};
    int n = arr.size();
    int secoundlargest = slargest(arr,n);
    int secoundsmallest = ssmallest(arr,n);
    
    cout << " the secound largest element is "<< secoundlargest << endl;
    cout << " the secound smallest element is "<< secoundsmallest << " ";
    


return 0;
}