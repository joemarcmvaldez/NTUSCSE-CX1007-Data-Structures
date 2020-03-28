#include <stdio.h>
int countEvenDigits1(int number);
void countEvenDigits2(int number, int *count);
int main()
{
int number, result;

printf("Enter a number: \n");
scanf("%d", &number);
printf("countEvenDigits1(): %d\n", countEvenDigits1(number));
countEvenDigits2(number, &result);
printf("countEvenDigits2(): %d\n", result);
return 0;
}
int countEvenDigits1(int number){

    int count_even = 0, x;

    while(number !=0){
        x = number % 10;
        if (x%2 == 0){
            count_even++;
            number = (number- x)/10;
        }
        else{
            number = (number- x)/10;
        }
    }

    return count_even;
}

void countEvenDigits2(int number, int *count)
{
    int x, y=0;
    while(number !=0){
        x = number % 10;
        if (x%2 == 0){
            y++;
            number = (number- x)/10;
        }
        else{
            number = (number- x)/10;
        }
    }*count = y;





}
