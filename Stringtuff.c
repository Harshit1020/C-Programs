#include <stdio.h>

int main()
{

    printf("==================********Welcome to String Reverse Word******==========================\n");
    char nm[] = "this like aai";
    int size = sizeof(nm) / sizeof(nm[0]);
    char nm2[size];
    nm2[size - 1] = '\0';
    size = size - 2;
    int secondcount = 0;
    int lastcount = size;
    int j = 0;

    for (int i = size; i >= 0; i--)
    {

        if (nm[i] == ' ' || i == 0)
        {

            if (i == 0)
            {

                for (int j = 0; j <= lastcount; j++)
                {

                    nm2[secondcount] = nm[j];
                    secondcount++;
                }
                lastcount = i - 1;
            }
            else
            {

                for (int j = i + 1; j <= lastcount; j++)
                {

                    nm2[secondcount] = nm[j];
                    secondcount++;
                }
                nm2[secondcount] = ' ';
                lastcount = i - 1;
                secondcount++;
            }
        }
    }
    int i = 0;
    while (nm2[i] != '\0')
    {

        printf("%c", nm2[i]);
        i++;
    }
    return 0;
}