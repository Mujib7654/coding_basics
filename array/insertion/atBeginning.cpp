#include <iostream>
using namespace std;

int main()
{
    int array[10];
    int n;
    cout << "Enter the size of the array upto 10" << endl;
    cin >> n;
    cout << "Enter elements of an array:" << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> array[i];
    }

    int x;
    cout << "Enter the element need to add at the beginning" << endl;
    cin >> x;

    for (int i = n; i >= 1; i--)
    {
        array[i] = array[i - 1];
    }

    array[0] = x;
    n++;

    cout << "array elements are:"
         << " ";
    for (int i = 0; i <= n - 1; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}