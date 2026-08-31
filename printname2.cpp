#include<iostream>
using namespace std;
void printName(string name){
    cout << "Hey,"<< name<< endl;
}
int main(){
    string name;
    cout<<"Enter name:";
    cin >> name;
    printName(name);
    return 0;
}