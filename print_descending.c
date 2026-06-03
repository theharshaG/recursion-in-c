#include<stdio.h>

void printNum(int n)
{
    if(n == 0)
        return;

    printf("%d ", n);

    printNum(n - 1);
}

int main()
{
    printNum(5);

    return 0;
}
