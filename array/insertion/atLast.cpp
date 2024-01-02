#include <iostream>
using namespace std;

int main()
{
    int array[10], n, x, i;
    cout << "Enter the size of the array upto 10: ";
    cin >> n;
    cout << "Enter the elements of an array: " << endl;
    for (i = 0; i <= n - 1; i++)
    {
        cin >> array[i];
    }

    cout << "Enter element to insert at last: " << endl;
    cin >> x;

    array[i] = x;
    n++;

    for (i = 0; i <= n - 1; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}