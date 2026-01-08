#include<stdio.h>

main()
{
    float farh, celcius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    farh = lower;
    printf("fahrenheit Celsius\n");

    while (farh <= upper){
        celcius = (5.0/9.0) * (farh-32.0);
        printf("%13.0f %20.1f\n", farh, celcius);
        farh = farh +step;

    }

}