#include<iostream>
using namespace std;
int maximum(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int minimum(int a,int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}
int main(){
    int a,b;
    cout<<"Enter a and b:";
    cin >> a >> b;
    int maxxx=maximum(a,b);
    cout << "Maximum element is:"<<maxxx<<endl;
    int minnn=minimum(a,b);
    cout<<"Minimum Element is:"<<minnn<<endl;
return 0;
}