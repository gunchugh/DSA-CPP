#include<iostream>
using namespace std;
int main(){
    string s ="Striver";
    cout << s[2] << endl;
    int length=s.size();
    cout << s[length-1]<<endl;
    s[length-1]='z'; //can be modified
    cout << s[length-1]<<endl;

return 0;    
}