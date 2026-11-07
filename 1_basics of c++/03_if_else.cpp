#include<iostream>
using namespace std;
int main(){
 int marks;
    cout << "eneter the marks :";
    cin >> marks;
    if(marks>=90){
        cout << "grade A"<<endl;
    }
    else if(marks>=70 && marks < 90){
         cout << "grade B"<<endl;
    }     
    else if(marks>=50 && marks < 70){
         cout << "grade C"<<endl;
    }
    else if(marks>=35 && marks < 50){
         cout << "grade D"<<endl;
    }
    else {
      cout << "fail" <<endl;
   }
}