bool IsRising(const float* sequence, int size)
{
	if (size < 2) 
    {
		return true;
	}
	
	if (*sequence > *(sequence + 1)) 
    { 
		return false;
	}
	
	return IsRising(++sequence, size - 1);
}