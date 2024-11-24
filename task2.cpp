#include<iostream>
using namespace std;
#include<string>

int countFullRotations(string directions[], int size)
{
    int totalDegrees = 0;

    // Calculate total degrees based on the directions.
    for(int i=0; i<size; i++)
    {
        if (directions[i] == "right")
        {
            totalDegrees += 90;
        }
        else if (directions[i] == "left")
        {
            totalDegrees -= 90;
        }
    }

    totalDegrees = abs(totalDegrees);
    int fullRotations = totalDegrees / 360;

    return fullRotations;
}

int main()
{
    int size;
    cout << "Enter the number of directions: ";
    cin >> size;

    string directions[size];

    cout << "ENter the directions: ";
    for(int x = 0; x < size; x++)
    {
        cin >> directions[x];
    }

    int fullRotations = countFullRotations(directions, size);
    cout << "Full rotations made: " << fullRotations << endl;
}
