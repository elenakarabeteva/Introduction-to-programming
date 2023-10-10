bool BinarySearch(const int* arr, int left, int right, int number)
{
	int middle = left + (right - 1) / 2;
	
	if (arr[middle] == number) 
    { 
		return true;
	}
	
	if (arr[middle] > number) 
    {
		return BinarySearch(arr, left, middle - 1, number);
	}
	
	return BinarySearch(arr, middle + 1, right, number);
}