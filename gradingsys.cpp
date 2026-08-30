#include<iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter marks:";
    cin >> marks;

    if(marks<25){
        cout << "Grade F";
    }else if(marks>=25 && marks<=44){
        cout << "Grade E";
    }else if(marks>=45 && marks<=49){
        cout << "Grade D";
    }else if(marks>=50 && marks<=59){
        cout << "Grade C";
    }else if(marks>=60 && marks<=79){
        cout << "Grade B";
    }else{
        cout << "Grade A";
    }
    return 0;
}
