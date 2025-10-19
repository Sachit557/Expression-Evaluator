#include <stdio.h>

char* space_remove(char expression[40]);

int main()
{
    char *string = "HEllo world this is sachit!!!!";
    space_remove(string);
    return 0;
}

char* space_remove(char expression[40])
{
    printf("Hi");
    char clear_expression[50];
    int i , j = 0;
    for (i = 0 ; expression[i] != '\0' ; i++)
    {
        if (expression[i] != ' ')
        {
            clear_expression[j] = expression[i];
            j++;
        }
    }
    clear_expression[j] = '\0';
    printf("%s" , clear_expression);

}