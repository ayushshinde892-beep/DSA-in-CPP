#include<iostream>
using namespace std;
void pattern1(int n){
    int num = 1;
    for(int i =1;i<=n;i++){
        for(char ch = 'A' ;ch<='A' + i;ch++){
            cout << ch <<" " ;
    
        }
        cout << endl;
    }
    
}
    
int main(){
    int n;
    cin >> n;
    pattern1(n);
}