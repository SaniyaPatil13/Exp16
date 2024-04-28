#include<stdio.h>
#include<string.h>

int main()
{
    char text[100], pattern[50];
    int i,j,found;
    int textlenght, patternlenght;
    printf("Enter the text");
    scanf("%s", &text);

    printf("Enter the pattern");
    scanf("%s",&pattern);

    textlenght= strlen(text);
    patternlenght= strlen(pattern);

    for(i=0;i<=textlenght-patternlenght; i++)
    {
        found=1;
        for(j=0;j<patternlenght;j++)
        {
            if(text[i+j]!= pattern[j])
            {
                found=0;
                break;
            }
        }


        if(found)
        {
            printf("Pattern match found at index %d", i);
            break;
        }
    }

    if(!found)
    {
        printf("Pattern match not found");

    }
    return 0;
}
