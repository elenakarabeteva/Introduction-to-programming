#include "myStrLen.cpp"

void myStrCat(const char* str1, const char* str2, char* result) 
{
    size_t str1Length = myStrLen(str1);
    size_t str2Length = myStrLen(str2);

    for (size_t i = 0; i < str1Length; i++) 
    {
        result[i] = str1[i];
    }

    for (size_t i = 0; i < str2Length; i++)
    {
        result[str1Length + i] = str2[i];
    }

    result[str1Length + str2Length] = '\0';
}