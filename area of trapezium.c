include <stdio.h>
 
int main()
{
 printf("RA2211042010041 \n");
    float a, b, h;
    float area;
 
    printf("Enter the value for two bases & height of the trapezium: \n");
    scanf("%f%f%f", &a, &b, &h);
    area = 0.5 * (a + b) * h ;
    printf("Area of the trapezium is: %.3f", area);
    return 0;
}
