bool linearSearch(const int *arr, int size, int number)
{
	if (size == 0) 
    {
		return false;
	}

	if (arr[size - 1] == number) 
    {
		return true;
	}

	return linearSearch(arr, size - 1, number);
}