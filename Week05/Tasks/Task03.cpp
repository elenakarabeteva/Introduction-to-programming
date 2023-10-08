long long ToBinary(unsigned number)
{
	int buffer[1000000];
	int size = 0;

	while (number > 0) 
    {
		buffer[size] = number % 2;
		number /= 2;
		size++;
	}

	long long convertedToBinary = 0;
	long long multiply = 1;
	for (unsigned i = 0; i < size; i++) 
    {
		convertedToBinary += buffer[i] * multiply;
		multiply *= 10;
	}

	return convertedToBinary;
}