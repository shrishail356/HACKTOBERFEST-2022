#include<stdio.h>
 
void convert(int num)
{
    // creating an array to store binary equivalent
    int binaryArray[32];
 
    // using i to store binary bit at given array position
    int i = 0;
    while (num > 0) {
 
        // resultant remainder is stored at given array position
        binaryArray[i] = num % 2;
        num = num / 2;
        i++;
    }
 
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d",binaryArray[j]);
}
 
int main()
{
    int n = 11;
    convert(n);
    return 0;
}
