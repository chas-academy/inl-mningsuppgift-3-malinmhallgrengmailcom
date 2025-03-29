#include <stdio.h>
#include <math.h>


// Calculations, done in steps to keep things easy to trouble shoot

float calculate_hypotenuse(float a, float b) {
    float pow_a = pow (a, 2.0);
    float pow_b = pow (b, 2.0);

    float sum_raised = pow_a + pow_b;
    
    float hypotenuse = sqrt(sum_raised);
    return hypotenuse;
}

int main() {
    float a = 3.0;
    float b = 4.0;

    printf("%.2f\n", calculate_hypotenuse(a, b));  // Expected output: 5.00

    //Changing the values
    a = 5.0;
    b = 12.0;

    printf("%.2f\n", calculate_hypotenuse(a, b));  // Expected output: 13.00

    return 0;
}