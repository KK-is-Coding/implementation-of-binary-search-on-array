#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int element)
{
    int left, right, mid;
    left = 0;
    right = size - 1;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int size;
    cout << "Please, Enter the size of array: ";
    cin >> size;
    cout << "Enter the elements of array in increasing order : ";
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int element;
    cout << "Which element you want to search in array?" << endl;
    cin >> element;
    int index = binarySearch(arr, size, element);
    if (index == -1)
    {
        cout << "!Error: The element you are searching is not found.";
    }
    else
    {
        cout << "The element you are searching found at index : " << index << endl;
    }
    return 0;
}
