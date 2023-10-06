void Swap(int &first, int &second)
{
    int temp = first;
    first = second;
    second = temp;
}

void ReverseArray(int* arr, int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        Swap(arr[i], arr[size - 1 - i]);
    }    
}