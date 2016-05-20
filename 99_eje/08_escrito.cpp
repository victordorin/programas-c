#include <stdio.h>
#include <stdlib.h>
#define ME 7

int main(int argo, const char **argv)
{
    int name[ME], i=42;
        name[0] = i; i += 26;
        name[1] = i; i += 11;
        name[2] = i; i += 3;
        name[3] = i; i -= 9;
        name[4] = i; i += 5;
        name[5] = i; i -= 36;
        name[6] = i;

        for(int print = 0; print<ME; print++)
            printf("%c",name[print]);

        printf("\n");
        return EXIT_SUCCESS;
}

