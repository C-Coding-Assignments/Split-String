#include <stdio.h>
#include <stdbool.h>

//macro definition for MAX which defines that maximum length of the user's input
#define MAX 1000

//split function defintion which is needed to implement the functionality of a string splitter
void split(char *, char *, char *);

int main()
{
    //variable declarations and initializations
    char input[1000], *ptr1 = input, *ptr2 = input, ch;
    bool letterFound = false, singleSpace = false;
    
    //do-while loop which stores the user's input into a character array. The loop iterates until the user enters a new-line character    
    printf("Enter input: ");
    do
    {
        ch = getchar();
        
        //selection statement which checks if the user entered white-spaces before entering any letters, punctuation, or numbers
        if (ch == ' ' && !letterFound)
            continue;
            
        //selection statement which checks to see if the user entered a new-line character; if not, the character is stored in the character array
        if (ch != '\n' && ch != ' ')
            *ptr2++ = ch, letterFound = true;
        
        //selection statement which checks if the user entered a white-space, has already entered a non-white-space character, and not a second word
        if (ch == ' ' && letterFound && !singleSpace) 
            *ptr2++ = ch, singleSpace = true;
        //selection statement which checks if the user entered a white-space, has already entered a non-white-space character, and a second word    
        else if (ch == ' ' && letterFound && singleSpace)
            continue;
    } while (ch != '\n');

    //calling split function to print the user's array in a splitted format    
    split(input, ptr1, ptr2);

    return 0;
}

//function definition for split which is used to print the user's input as two words
void split(char *input, char *word1, char *word2)
{
    //for loop which iterates and prints the user's input until the compiler stumbles upon a white-space
    printf("Word #1: ");
    for (; word1 < word2 && *word1 != ' '; word1++)
        putchar(*word1);
    
    //incrementing the word1 pointer to skip the white-space
    word1++;
    
    //for loop which iterates and prints the user's input until the compiler stumbles upon the last character in the user's input
    printf("\nWord #2: ");
    for (; word1 < word2; word1++)
        putchar(*word1);
}
