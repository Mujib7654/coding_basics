#include <iostream>
using namespace std;

int main()
{
    // method : 1
    int array[5] = {10, 12, 14, 16, 20};

    // method : 2
    int marks[] = {12, 15, 85};
    // here compiler will automatically identify size of the array

    // method : 3 - User Input
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    // method : 4
    int number[5];
    number[0] = 15;
    number[1] = 17;
    number[2] = 20;
    number[3] = 9;
    number[4] = 12;

    // case
    int num[5] = {18, 12, 56};
    // here size of array is 5 but i have added only 3 element in array, so that compiler will assign some random value in place of empty elements, sometimes it will be 0
}