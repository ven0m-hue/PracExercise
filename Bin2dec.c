#include <stdio.h>
#include <string.h>
//Assuming that the binary number is given in a string format.

void bin2Dec(char* str)
{
    int n = strlen(str);
    const int i = n - 1; //Length of string minus the null char
    int result = 0;
    while (--n >= 0) // Predecriment to avoid the position to become negative
        result += (*(str + n) - '0') << (i - n); 
        //Convert thr char bit to binary bit and shift the bit according to its position
    
    printf("%d", result);
    
}

int main(int argc, char const *argv[])
{
    char* data = "1111";
    bin2Dec(data);
    return 0;
}
