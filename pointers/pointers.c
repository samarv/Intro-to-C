#include <stdio.h>
#include <string.h>

/*
    Swaps the integer values being pointed at by a and b. Keep in
    mind when you need to access a pointer's actual value (the 
    address it's referring to) or the value at the address it's 
    pointing at.

      Given a character pointer x (that points to an array of chars), and a
    character pointer y, copies the character contents of y over to x. Pointer
    arithmetic is necessary here. Also, make sure x points to a null terminator
    at its end to terminate it properly. 

    Example call:
*/
void swap(int* a, int* b)
{
    int ip1;
    int ip2;
    ip1 = *b;
    ip2 = *a;
    *b = ip2;
    *a = ip1;
}

    char buffer[1024];

    string_copy(buffer, "Hello!");
    printf("%s", buffer); // Prints "Hello!"
*/
void string_copy(char *x, char *y)
{
    int count = 0;
    do {
        count++;
    } while (s[count] != '\0');
    return count;
}

/*
    Searches the input string `str` for the first instance of the 
    character `c` (an unsigned char). This function returns a pointer
    that points to the first instance of the character `c` in the
    input string `str`.

    Do not use the `strchr` function from the standard library.
*/
char *find_char(char *str, char c)
{
    int count = 0;
    do {
        x[count] = y[count];
        count++;
    } while (y[count] != '\0');
    x[count] = '\0';
    printf("x = %s\n", x);
    printf("y = %s\n", y);
    
}

/*
    Searches the input string `haystack` for the first instance of
    the string `needle`. This function returns a pointer that points
    to the first instance of the string `needle` in the input
    string `haystack`. 

    Do not use the `strstr` function from the standard library.
*/
char *find_string(char *haystack, char *needle)
{
    for (int i = 0; ; i++)
    {
        if (m[i] != n[i])
        {
            return m[i] < n[i] ? -1 : 1;
        }

        if (m[i] == '\0')
        {
            return 0;
        }
    }
}

#ifndef TESTING
int main(void)
{
    char *found_char = find_char("hello", 'e');
    char *found_string = find_string("world", "or");

    printf("Found char: %s\n", found_char);
    printf("Found string: %s\n", found_string);

    return 0;
}
#endif
