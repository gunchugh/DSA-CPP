#include<iostream>
using namespace std;
void doSomething(int num){
    cout << num<<endl;
    num+=5;
    cout << num<<endl;
    num+=5;
    cout << num<<endl;
    num+=5;
    cout << num<<endl;
}
int main(){
    int num=5;
    doSomething(num);
    cout << num << endl;
    return 0;
}