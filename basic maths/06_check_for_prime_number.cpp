#include<iostream>
using namespace std;
int main(){
int n ;
cin >> n;
int count = 0;
for(int i = 1; i*i <= n; i++){
    if(n%i==0){
        if(i*i==n){
            count++;
        }
        else{
            count = count + 2;
        }
    }
}
if(count==2){
    cout << "true" << endl;
}
else{
    cout << "false" << endl;
}


return 0;
}