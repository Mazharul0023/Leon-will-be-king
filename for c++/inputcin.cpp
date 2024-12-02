#include <iostream>
using namespace std;
int main()
{
    /* int age;
     cout << "Enter your age: ";
     cin >> age;
     cout << "your present age is:" << age << endl; */

    /*int a;
    int b;
    cout << "enter a:";
    cin >> a;

    cout << "enter B:";
    cin >> b;

    int sum = a + b;
    cout << "the sum is=" << sum << endl; */

    int science;
    int english;
    int physics;

    cout << "enter your science number : " << endl;
    cin >> science;

    cout << "enter your english number : " << endl;
    cin >> english;

    cout << "enter your physics number : " << endl;
    cin >> physics;

    int sum = science + english + physics;

    int avarage = (science + english + physics) / 3;

    cout << "your total mark is :" << sum << endl;
    cout << "your avarage mark is :" << avarage << endl;

    return 0;
}