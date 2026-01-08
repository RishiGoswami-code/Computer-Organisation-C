#include <stdio.h>

#define LOWER 0
#define UPPER 3000
#define STEP 20

int main (){
    int farh;
    printf("Farhenheit Celsius \n");
    for (farh = LOWER; farh <= UPPER; farh=farh+STEP){
        printf("%4d %10.1f\n", farh, (5.0/9.0)*(farh-32));
    }
    return 0;

}