#include <iostream>
using namespace std;
int main()
{
    float pencil;
    float pen;
    float eraser;

    cout << "price of a pencil :";
    cin >> pencil;

    cout << "price of a pen :";
    cin >> pen;

    cout << "price of an eraser :";
    cin >> eraser;

    float cost = pencil + pen + eraser;
    float withgst = cost * 0.18;

    cout << "the total cost :" << cost << endl;
    cout << "the cost after applying 18% tax :" << cost + withgst << endl;

    return 0;
}