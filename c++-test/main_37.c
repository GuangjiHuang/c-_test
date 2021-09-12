// C program to illustrate
// gets()
#include <stdio.h>
#define MAX 15
  
int main()
{
    char buf[MAX];
  
    printf("Enter a string: ");
    gets(buf);
    *(buf+MAX-1) = '\0';
    printf("string is: %s\n", buf);
  
    return 0;
}
