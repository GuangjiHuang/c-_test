#include<stdio.h>
#define MAX_SIZE 6
using namespace std;
int main()
{
    char str[MAX_SIZE];
    char str1[MAX_SIZE];

    // use the fgets to get the line
    fgets(str, MAX_SIZE, stdin);
//    fgets(str1, MAX_SIZE, stdin);

    // show the result
    printf("the str is: %s", str);
    printf("\n");
 //   printf("the str1 is: %s", str1);

    return 0;
}
