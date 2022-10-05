#include <stdio.h>

int main() {
    int n;
    scanf_s("%d", &n);
    int t = n;

    int len = 1;
    if (t > 0)
    {
        len = 0;
        while (t > 0)
        {
            t /= 10;
            len++;
        }
    }
        
    int inverted = 0;
    int pow = 1;

    for (int i = 0; i < len - 1; i++)
    {
        pow *= 10;
    }
    int count = 0;
    while (n > 0)
    {
        inverted += ((n % 10) * pow);
        if (count == 0 && inverted == 0)
            break;
        n /= 10;
        pow /= 10;
        count = 1;
    }
    if (inverted == n || inverted == 0)
    {
        printf("The number cannot be changed.");
    }
    else
        printf("%d", inverted);

    return 0;
}