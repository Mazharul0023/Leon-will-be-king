#include<iostream>
using namespace std;

int main () {
    int a = 10;
    int b = 5 ;

    int largest = a>=b ? a : b ;

    cout<<"largest is "<<largest<<endl;

    int num =13;
    bool IsEven = num % 2 == 0 ? true : false ;
    return 0;
}