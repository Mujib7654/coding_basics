#include <iostream>
using namespace std;

int main()
{
    int array[10], n, x, i, p;
    cout << "Enter the size of array upto 10" << endl;
    cin >> n;

    cout << "enter the elements of an array: "
         << " ";
    for (i = 0; i <= n - 1; i++)
    {
        cin >> array[i];
    }

    cout << "enter the position to insert an element: " << endl;
    cin >> p;

    cout << "enter the value need to insert: " << endl;
    cin >> x;

    for (i = n; i >= p - 1; i--)
    {
        array[i] = array[i - 1];
    }

    array[p] = x;
    n++;

    cout << "Elemets of array are: ";
    for (i = 0; i <= n - 1; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}