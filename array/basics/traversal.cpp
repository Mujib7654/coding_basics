#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    int array[n];
    cout << "Enter elements of an array" << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> array[i];
    }
    // accessing every element of array and print using loop
    for (int i = 0; i <= n - 1; i++)
    {
        // cout << array[i] << " " << endl;
        // print with their respective index number
        cout << "Index:" << i << "Value:" << array[i] << endl;
    }

    // accessing each element individually
    cout << array[0] << endl;
    cout << array[1] << endl;
    cout << array[2] << endl;
    cout << array[3] << endl;
    cout << array[4];

    return 0;
}