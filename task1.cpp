#include <iostream>
using namespace std;

bool canFormConsecutive(int arr[], int size)
{
    if (size <= 1)
    {
        return true; // A single element or empty array is always consecutive.
    }

    // Find the minimum and maximum values in the array.
    int minVal = arr[0];
    int maxVal = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }

    // Check if size = range
    if (maxVal - minVal + 1 != size)
    {
        return false;
    }

    // Create a visited array to ensure each number appears only once.
    bool visited[size] = {false};

    for (int i = 0; i < size; i++)
    {
        int index = arr[i] - minVal;
        if (visited[index])
        {
            return false;
        }
        visited[index] = true;
    }

    return true; // All checks passed.
}

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout<<"Enter elements of array each on one line \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    if (canFormConsecutive(arr, size))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}
