#include <iostream>

using namespace std;

void arrInput(int *arr, unsigned size);
void arrCut(int *firstArray, int *secondArray, unsigned size1, unsigned size2);

int main()
{
    int firstArray[5];
    int secondArray[5];

    arrInput(firstArray, 5);
    arrInput(secondArray, 5);
    arrCut(firstArray, secondArray, 5, 5);

    return 0;
}

void arrInput(int *arr, unsigned size)
{
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void arrCut(int *firstArray, int *secondArray, unsigned size1, unsigned size2)
{
    for(int i = 0; i < size1; i++)
    {
        for(int j = 0; j < size1; j++)
        {
            if(firstArray[i] == secondArray[j])
            {
                cout << firstArray[i] << " ";
            }   
        }   
    }
     cout << endl;
}