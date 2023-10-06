int BinarySearch(const int* arr, int size, int number)
{
    int left = 0, right = size - 1, middle;

    while (left <= right)
    {
        middle = left + (right - left) / 2;
        if (arr[middle] == number)
        {
            return middle;
        }
        else if (arr[middle] < number)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }        
    }
    return -1;
}