// #include <iostream>
// using namespace std;

// void printNumbers(int n) {
//     if (n < 1) {
//         return;
//     }
//     cout << n << " ";
//     printNumbers(n - 1);
// }

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;
//     printNumbers(n);
//     cout << endl;
//     return 0;
// }



//////////**************************TRACEBACK******************/////////////////

#include<iostream>
using namespace std;
void printnumber(int i,int n){
    if (i<1)
    {
        return;
    }
    cout<< i << endl;
    printnumber(i-1,n);
    
}
int main(){
    int n;
    cin >> n;
    printnumber(n,n);
}