#include <iostream>
#include <vector>
using namespace std;

int partion(vector<int> &arr, int st, int end) {
    int idx = st - 1;
    int pivot = arr[end];

    for (int j = st; j < end; j++) {
        if (arr[j] <= pivot) {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }

    idx++;
    swap(arr[end], arr[idx]);
    return idx;

}

void quicksort(vector<int> &arr,int st,int end){
    if(st < end){
        int pivindx = partion(arr,st ,end);

        quicksort(arr,st,pivindx-1);
         quicksort(arr,pivindx+1,end);
    }
}
int main(){
vector<int> arr = {24,39,6,638,92};
quicksort(arr,0,arr.size()-1);

for(int val : arr){
    cout << val << " ";
}
cout << endl;
return 0;
}