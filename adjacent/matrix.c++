#include <iostream>
using namespace std;
int main(){

    int adjmatrix[3][3] = {

        {1, 0, 1},
        {0, 1, 1},
        {1, 1, 0},
        };

    cout << "adjmatrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << adjmatrix[i][j] << " ";
        }

        
    }
    return 0;


}