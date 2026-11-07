#include<iostream>
using namespace std;
// function are the set  code which perform something for you
// function are used to modulerisec the code
// the function are used the relibility of the code 
// function are use the same. code multiplen time
// void -> does not return anything
// return
// parameterised
// non parameterised
void printname(string name){
    cout << "hii :" << name <<  endl;
}

int sum(int n1 , int n2){
    int n3 = n1 + n2;
    return n3;
}

int max(int n1 , int n2 ){
    if (n1>=n2)
    {
       return n1;
    }
    else {
        return n2;
    }
    
}
int main(){
    // print name 
    string name;
    cout << "eneter your name :" << endl;
    cin >> name;
    printname(name);

    //  sum of two numbers
    int n1 ,n2;
    cout << "enter the numbers :" << endl;
    cin >> n1 >> n2 ;
    int result = n1 + n2 ;
    cout << "the sum of two number is :" << endl;
    cout << result << endl;
    sum(2,3);
    
    // finding the maximum number between two numbers 
    int maxnum = max(n1,n2);
    cout << "the maximum number is :"<<endl;
    cout << maxnum << endl;
    return 0;

}