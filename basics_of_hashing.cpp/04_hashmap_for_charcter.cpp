#include<iostream>
#include<map>
using namespace std;
int main(){
    string s;
    cout << "enter the stringe :";
    cin >> s;

    
    // precompute
    map<char,int> mpp;
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }
    for(auto it : mpp){
        cout << it.first << "->" << it.second << endl;
    }
    
int q;
cout << "enter the numeber the quaries you want ot do :";
cin >> q;
while(q--){
    char c;
    cout << " enter the number you want to search :";
    cin >> c;
    // fetch
    cout << "the frequency of the character " << c << " is : ";
    cout << mpp[c] << endl ;
}
return 0;
}