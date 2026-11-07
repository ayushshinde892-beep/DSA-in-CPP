#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "enter the number :" << endl;
    cin >> num;
    int originalnum = num;
    int reversenum = 0;
    int lastdigit=0;

        while(num>0){

         int lastdigit = num%10;
         reversenum = (reversenum*10) + lastdigit;
          num = num /10;
        }
        if (originalnum == reversenum ){
        cout << "true" << endl;;
        }
        else {
            cout << "false" << endl;
        }

}


