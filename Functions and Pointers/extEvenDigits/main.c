#include <stdio.h>
#define INIT_VALUE 999
#include<math.h>
int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);
int main()
{
int number, result = INIT_VALUE;

printf("Enter a number: \n");
scanf("%d", &number);
printf("extEvenDigits1(): %d\n", extEvenDigits1(number));
extEvenDigits2(number, &result);
printf("extEvenDigits2(): %d\n", result);
return 0;
}
int extEvenDigits1(int num)
{
    int x,i=0,new_num=0;
    while(num != 0){
        x = num%10;
        num = num/10;
        if (x%2 == 0){
            x = x * (int)(pow(10, i)+0.5);
            new_num += x;
            i++;
        }
    }
    return new_num;
}
void extEvenDigits2(int num, int *result)
{
    int x,i=0,new_num=0;
    while(num != 0){
        x = num%10;
        num = num/10;
        if (x%2 == 0){
            x = x * (int)(pow(10, i)+0.5);
            new_num += x;
            i++;
        }
    }
    *result = new_num;
}
