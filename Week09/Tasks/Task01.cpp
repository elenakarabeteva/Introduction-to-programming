bool Exist_digit(unsigned int value, unsigned int digit)
{
    if (value == 0) 
    {
		return false;
	}
		
    if (value % 10 == digit) 
    {
		return true;
	}

    return Exist_digit(value / 10, digit);
}