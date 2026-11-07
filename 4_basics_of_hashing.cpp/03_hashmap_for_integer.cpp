#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cout << "enter the space for number :";
    cin >> n;
    int arr[n];
    cout << "enter the numbers :";
    for (int i = 0; i < n; i++)
    {
        
        cin >> arr[i];
    }
    // precompute
    map<int,int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        cout << it.first << "->" << it.second << endl
    }
    
int q;
cout << "enter the numeber the quaries you want ot do :";
cin >> q;
while(q--){
    int number;
    cout << " enter the number you want to search :";
    cin >> number;
    // fetch
    cout << "the frequency of the number " << number << " is : ";
    cout << mpp[number] << endl ;
}
return 0;
}