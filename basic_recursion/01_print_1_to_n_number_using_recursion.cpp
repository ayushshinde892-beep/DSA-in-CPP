#include<iostream>
using namespace std;
void printnumber(int i,int n){
 if (i>n)
 {
    return;}
    cout << i << endl;
    printnumber(i+1,n);
 
 
}
int main(){
    int n;
    cin >> n;
     printnumber(1,n);
}
   
/*************backtrack*************/

// #include<iostream>
// using namespace std;
// void printnumber(int i,int n){
//   if (i<1)
//   {
//     return;
//   }
//   printnumber(i-1,n);
//   cout << i << endl;
// }
// int main(){
//     int n;
//     cin >> n;
//     printnumber(n,n);
// }