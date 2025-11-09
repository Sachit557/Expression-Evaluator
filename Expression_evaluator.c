#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "string.h"

void expression_eval(char expression[40]); // it must take string input
void bracket(char expression[40]);
char *space_remove(char expression[40]);

char clear_expression[40];
int expression_bracket_size = 20; // set at 20 can be increased

int main()
{
    char string[] = "(4+(5-1))+(7*2)"; // test string - Hardcoded
    space_remove(string);
    return 0;
}

char *space_remove(char expression[40])
{

    int i, j = 0;
    for (i = 0; expression[i] != '\0'; i++)
    {
        if (expression[i] != ' ')
        {
            clear_expression[j] = expression[i];
            j++; // the letters in the string counted
        }
    }
    clear_expression[j] = '\0'; // clear expression has the string with spaces removed
    return clear_expression;
}

void bracket(char expression[40])
{
    int op = 0, cb = 0;                          // open bracket (op) for '('
    for (int i = 0; i < strlen(expression); i++) // close bracket (cb) for '('
    {
        if (expression[i] == '(')
        {
            op++;
        }

        if (expression[i] == ')')
        {
            cb++;
        }
    }

    if (op != cb)
    {
        printf("Number of open brackets are not equal to number of closed brackets\n");
        return;
    }

    for (int i = 0; i < strlen(expression); i++)
    {
        if (expression[i] == '(')
        {
            for (int j = i; j < strlen(expression); j++)
            {
                if (expression[j] == ')' || expression[j] == '(')
                {
                    if (expression[j] == '(')
                    {
                        break; // same bracket again :D
                    }

                    if (expression[j] == ')')
                    {
                        int n = 0;
                        char expression_bracket[expression_bracket_size];
                        for (int k = i + 1; k < j; k++)
                        {
                            if (n < expression_bracket_size - 1)
                            {
                                expression_bracket[n++] = expression[k]; // substring
                            }
                            // append values into the expression bracket from the stuff in bracket
                            // send to the expression eval with a string to eval it
                        }
                        expression_bracket[n] = '\0';
                    }

                    else
                    {
                        break;
                    }
                }
            }
        }
    }
}
void print()
{
    printf(" \n");
}
