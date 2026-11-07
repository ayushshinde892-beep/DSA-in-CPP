#include<iostream>
using namespace std;
void gcd(int n1,int n2){
    int gcd = 0;
    
    for(int i = min(n1,n2);i>=1;i--){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
            break;
        }
        
    }
    cout << gcd << endl;
}
int main(){
int n1,n2;
cin >> n1 >> n2 ;
gcd(n1,n2);

return 0;
}