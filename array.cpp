#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n];
    cout << "Enter elements of array:"<< endl;
    cin >> arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    arr[3]+=10; //can be modified
    cout << arr[3]<<endl;
return 0;
}