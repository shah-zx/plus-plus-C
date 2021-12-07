#include <stdio.h>
#include <conio.h>

int main()
{
    char s[30] = "staysafefromcorona";
    int i;
    for (int i = 0; i < 29; i++)
    {
        if ((s[i] == 'e') && (s[i + 1] == 'f'))
            break;
    }
    printf("%d", i);
}
