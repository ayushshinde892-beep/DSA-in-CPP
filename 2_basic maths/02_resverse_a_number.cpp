#include<iostream>
using namespace std;

int main(){
int num;
cout << "enter the numeber :"<< endl;
cin >> num ;
int reversenum = 0;
while(num>0){

    int lastdigit = num%10;
    reversenum = (reversenum*10) + lastdigit;
    num = num /10;
}
cout << reversenum;
return 0;
}