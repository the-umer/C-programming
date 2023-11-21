#include <stdio.h>

int main()
{
    int n;
    float mul=1;
    printf("Enter the total numbers to be multiplied:- ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        float x;
        printf("Enter %d Element: ",(i+1));
        scanf("%f",&x);
        mul=mul*x;
    }
    printf("Multiplication of %d elements are: %.2f",n,mul);

    return 0;
}