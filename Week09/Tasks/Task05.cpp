bool isPalindrome(const char* array, int leftIndex, int rightIndex)
{
	if (leftIndex >= rightIndex)
    {
		return true;
	}

	if (array[leftIndex] != array[rightIndex]) 
    {
		return false;
	}

	return isPalindrome(array, leftIndex + 1, rightIndex - 1);
}