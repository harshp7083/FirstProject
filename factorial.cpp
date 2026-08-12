#include<iostream>
using namespace std;
int factorial(int a){
    if (a==1) return;
    return a*factorial(a-1) ;
}
int main(){
    int a = 5;
    factorial(a);
    return 0;
}