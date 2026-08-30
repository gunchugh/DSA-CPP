#include<iostream>
#include<string>
using namespace std;
int main(){
    string s ;
    //string only print words not sentence
    cout << "Enter the string:"<< endl;
    cin >> s;
    cout << s;
    //use getline to print whole sentence
    getline(cin,s);  //reads only one line ,after enter it will not read
    cout << s; 
return 0;    
}