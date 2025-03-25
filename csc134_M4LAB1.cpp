// CSC 134
// M4LAB1
// Sebastian Camacho
// 03/25/2025

#include <iostream>
using namespace std;

int main() 
{
    int height, width;

    // height = 5;
    // width = 5;
    cout << "How tall should the block be?" << endl;
    cin >> height;
    cout << "How wide should the block be?" << endl;
    cin >> width;

    cout << "One Row" << endl;
    for (int i=0; i < width; i++)
    {
        cout << "*" << " ";
    }
    cout << endl;

    cout << "One Column" << endl;
    for (int j=0; j < height; j++)
    {
        cout << "*" << endl;
    }

    cout << "The entire block" << endl;
    for (int j=0; j < height; j++)
    {
        for (int i=0; i < width; i++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    
    return 0;

}