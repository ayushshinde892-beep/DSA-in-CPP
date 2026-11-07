#include<iostream>
using namespace std;
void countDigit(int n){
    int count= 0;
    
    while(n>0){
        count = count + 1;
        n=n/10;
        }
        cout << count <<endl;
}

int main(){
    int n;
    cin >>n;
    countDigit(n);

return 0;
}