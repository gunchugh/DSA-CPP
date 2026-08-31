#include<iostream>
using namespace std;
void printName(string name1,string name2){
    cout << "Hey,"<< name1<< endl;
    cout << "Hey,"<< name2<< endl;
}
int main(){
    string name1,name2;
    cout<<"Enter name1 and name2:";
    cin >> name1 >> name2;
    printName(name1,name2);
    return 0;
}