int findLastKBitsOfNumber(int number, int k)
{
    const int bitOne = 1;
    int bitMask = 0;
    while (k > 0)
    {
        bitMask <<= 1;
        bitMask = bitMask | bitOne;
        k--;
    }

    return number & bitMask;
}