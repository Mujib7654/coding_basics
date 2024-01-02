#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {12, 15, 78, 96, 13};
    // size of array
    int size = sizeof(marks) / sizeof(marks[0]);
    // print array at index 2
    cout << marks[2] << endl;
    // print array at index 4
    cout << marks[4] << endl;
    // print every element of array using loop
    for (int i = 0; i <= size - 1; i++)
    {
        cout << marks[i] << " ";
    }
    return 0;
}