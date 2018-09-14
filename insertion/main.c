#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i;
    int j;
    int temp;
    int data[]
    for(i=1;i<len;i++)
    {

        temp = data[i];
        j = i-1;
        while(j>=0 && temp<data[j])
        {
            data[j+1] = data[j];
            j--;
        }
        data[j+1] = data[j];

    }
    return 0;
}
