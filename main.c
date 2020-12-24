#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[256], s1[256] = " ", *pr, *word;
    printf("enter the string\n");
    gets(s);


    pr = strtok(s, " ");
    while (pr != NULL)
    {
        strcat(s1, pr);
        pr = strtok(NULL, " ");
        if(pr != NULL) strcat(s1, " ");
    }
    puts(s1+1);
    word = strrchr(s1, ' ')+1;
    pr = strtok(s1, " ");
    while (pr != NULL)
    {
        if (strcmp(pr, word) != 0) printf("%s ", pr);
        pr = strtok(NULL, " ");
    }
    return 0;
}
