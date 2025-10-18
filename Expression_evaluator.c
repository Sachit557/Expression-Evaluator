#include <stdio.h>

char* Space_remover(char expression[50]);


int main()
{
    Space_remover("Hello world");
    return 0;
}

char* Space_remover(char expression[50])
{
    int count = 0;
    char expression_copy[50];
    for ( int i = 0 ; expression[i] != '\0' ;i++)
    {   
        count++;
        if ( count > 40)
        {
            printf("cant be greater than 40\n");
            break;
        }
    }  
    
    for ( int i = 0 ; i < count ; i++)
    {
        expression_copy[i] = expression[i];
    }
    
    for ( int i = 0 ; i < count ; i++)
    {
        if ( expression[i] == ' ')
        {
            int space_counter = 0;
            for ( int j = i; j < count; j++)
            {
                space_counter++;
                if (count == j+1)
                {
                    break;
                }
                expression_copy[j] = expression[j+1];
            }
            expression_copy[count-1-space_counter] = '\0';

        }


    }

    // some issue before this!!!
    int counter = 0;
    for ( int i = 0 ; expression_copy[i] != 0 ; i++)
    {
        counter++;
        printf("%c" , expression_copy[i]);
    }
    printf("%d" , counter);
    
    


}   