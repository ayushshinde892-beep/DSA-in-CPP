#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "enter the number :" << endl;
    cin >> num;
    int originalnum = num;
    int sum = 0 ;
    int ld=0;

        while(num>0){

         int ld = num%10;
         sum = sum + (ld * ld * ld);
          num = num /10;
        }
        if (originalnum == sum ){
        cout << "true" << endl;;
        }
        else {
            cout << "false" << endl;
        }

}


