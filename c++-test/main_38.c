#include<stdio.h>
#include<time.h>

int sleep(unsigned long);
int main()
{
    int i;
    clock_t c;
    for (i = 20; i>0; i--)
    {
        printf("\r%d", i);
        fflush(stdout);
        sleep(1000);
    }
    printf("\r\aFIRE!!\n");
    c = clock();
    printf("the total time is: %.1fs.\n");
    return 0;
}

int sleep(unsigned long x)
{
    clock_t c1 = clock(), c2;
    do {
        if ((c2 = clock()) == (clock_t) - 1)
            return 0;
    } while (1000.0 * (c2 -c1) / CLOCKS_PER_SEC < x);
    return 1;
}





  
