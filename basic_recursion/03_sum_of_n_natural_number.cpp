/**********************.   PARAMETERIESD WAY  ***********************/
// #include<iostream>
// using namespace std;
// void sumN(int i , int sum){
//    if (i<1){
//     cout << sum << endl;
//     return ;
//    }
//    sumN(i-1,sum+i);
// }
// int main(){
//     int n;
//     cin >> n;
//     sumN(n,0);

// return 0;
// }

/***************************    FUNCTIONAL WAY *********************/
#include<iostream>
using namespace std;
int sum(int n){
  if (n==0)
  {
    return 0;
  }
  else return n + sum(n-1);
  
}
int main(){
    int n;
  cin >> n;
  cout << sum(n);

return 0;
}