#include <stdio.h>
#include <string.h>

// string replace
// string length
// string append
// substring finder 

int string_length(char string[50]);
char string_append(char string[50] , char append[50]);
char string_replace(int start , int end , char string[40] , char new_text[40]);
char substring_finder(int start , int end , char string[40]);


int string_length(char string[50])
{
    int a = strlen(string);
    return a;
}

char string_append(char string[50] , char append[50])
{ 
    int string_length = strlen(string);
    int append_string_length = strlen(append);
    int total =  string_length + append_string_length + 1;
    char appended_string[total];

    for (int i = 0 ; i < string_length ; i++)
    {
        appended_string[i] = string[i];
    }

    for ( int j = 0 ; j < append_string_length ; j++ )
    {
        appended_string[string_length + j] = append[j];
    }

    appended_string[total-1] = '\0';

    // return the appended string

}


char string_replace(int start , int end , char string[40] , char new_text[40])
{

    //replace the text between i and j to the new text where i and j are included
    int difference = end - start -1;
    int new_str_length = string_length(new_text);
    
    if ( start != 0)
    {
        int difference = end - start +1;
        char updated_string[40];
        for (int i = 0 ; i < start ;i++)
        {
            string_append(updated_string , string[i]);
        }

        for ( int i = 0 ; i < new_str_length ; i++)
        {
            string_append(updated_string , new_text[i]);
        }

        for ( int i = new_str_length ; i ; i++)
        {
            
        }


    }

    else if ( start == 0)
    {

    }

    

}

char substring_finder(int starting , int ending , char string[40])
{
    char substring[40];
    int difference = ending - starting +1;
    for ( int i = starting ; i <= ending ; i++)
    {
        string_append(substring ,string[i] );
    }

    substring[difference] = '\0';

    //return substring
    
}