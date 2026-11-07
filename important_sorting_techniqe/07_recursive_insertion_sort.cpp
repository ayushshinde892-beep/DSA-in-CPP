#include<iostream>
using namespace std ;

void insertion_sort(int arr[],int n ){
    for(int i =1 ; i<n;i++){
        int current = arr[i];
        int prev = i-1;
        while (prev>=0 && arr[prev]>current)
        {
           arr[prev+1]=arr[prev];
           prev--;
        }
        arr[prev + 1]=current;
        insertion_sort(arr,n-1);
    }
}

    

int main(){
    int n =5;
    int arr[]={4,1,5,2,3};
    insertion_sort(arr,n);
   
    for (int val : arr){
        cout<< val <<" ";
    }

 return 0;
}