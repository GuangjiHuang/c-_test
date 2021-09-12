#include<stdio.h>
#include<time.h>

int main()
{
    // the program's begin
    time_t t1;
    time(&t1);
    for(long long i=0; i < 10002222231; i++)
    {
        ;
    }
    time_t t2;
    time(&t2);

    double grap_time = t2 - t1;
    printf("the program's execute time is: %f\n", grap_time);

    return 0;
}
