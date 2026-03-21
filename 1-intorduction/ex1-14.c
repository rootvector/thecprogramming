#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float calculate(float fahr);

int main(){
    float fahr = LOWER, celsius;
    
    while(fahr <= UPPER){
        printf("%3.0f   %6.1f\n", fahr, (celsius = calculate(fahr)));
        fahr += STEP;
    }

    return 0;
}

float calculate(float fahr){
    return (5.0/9.0) * (fahr-32.0);
}
