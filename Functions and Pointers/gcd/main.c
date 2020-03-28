#include <stdio.h>
int gcd1(int num1, int num2);
void gcd2(int num1, int num2, int *result);
int main()
{
int x,y,result=-1;

printf("Enter 2 numbers: \n");
scanf("%d %d", &x, &y);
printf("gcd1(): %d\n", gcd1(x, y));
gcd2(x,y,&result);
printf("gcd2(): %d\n", result);
return 0;
}
int gcd1(int num1, int num2)
{
    int i = 0, result;
    while(i < num1+num2){
        i++;
        if ((num1 % i == 0 && num2 % i== 0) ){
            result = i;
        }
    }
    return result;
}
void gcd2(int num1, int num2, int *result)
{
    int i = 0;
    while(i < num1+num2){
        i++;
        if ((num1 % i == 0 && num2 % i== 0) ){
        *result = i;
        }
    }
}
