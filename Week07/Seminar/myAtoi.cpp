#include "myStrLen.cpp"

bool isDigit(char symbol) 
{
    return '0' <= symbol && symbol <= '9';
}

bool isValidNumber(const char* number) 
{
    size_t length = myStrLen(number);

    if (length == 0) 
    {
        return false;
    }

    if (length == 1 && number[0] == '-') 
    {
        return false;
    }

    size_t index = number[0] == '-' ? 1 : 0;

    while (index < length)
    {
        if (!isDigit(number[index])) 
        {
            return false;
        }

        index++;
    }

    return true;
}

int myAtoi(const char* number) 
{
    if (!isValidNumber(number)) 
    {
        return 0;
    }

    bool isNegative = number[0] == '-';
    size_t index = isNegative ? 1 : 0;
    int result = 0;

    while (number[index] != '\0') 
    {
        result = result * 10 + (number[index] - '0');
        index++;
    }

    return isNegative ? -result : result;
}