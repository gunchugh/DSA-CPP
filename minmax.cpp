#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a , b;
    cout << "Enter a and b:";
    cin >> a >> b;
    int maxx=max(a,b);
    int minn=min(a,b);
    cout << "Maximum"<< maxx<<endl;
    cout << "Minimum:"<<minn<<endl;
    return 0;

}