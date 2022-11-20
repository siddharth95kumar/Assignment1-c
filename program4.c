#include<stdio.h> //WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.
void main()
{
    int R;
    float A;
    printf("Enter the radius : ");
    scanf("%d",&R);
    A=3.14 * R * R;
    printf("Area of circle is %f having radius %d \n",A,R);
}
