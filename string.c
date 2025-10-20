#include <stdio.h>
#include <string.h>

// string replace
// string length
// string append
// substring finder 

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


char string_replace(int i , int j , char string[40] , char new_text[40])
{

    //replace the text between i and j to the new text where i and j are included
    int difference = j - i -1;
    int new_str_length = string_length(new_text);
    
    if ( difference > new_str_length)
    {

    }

    else if ( difference <= new_str_length)
    {

    }

    

}

char substring_finder()
{

    
}