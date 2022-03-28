#include <stdio.h>
#define MAX_SIZE 100
float sum(float [], int);
float input[MAX_SIZE], answer;
int i;
void main(void)
{
for(i=0; i < MAX_SIZE; i++)
input[i] = i;
/* for checking call by reference */
printf("address of input = %p\n", input);           //input의 주소를 출력
answer = sum(input, MAX_SIZE);                      //
printf("The sum is: %f\n", answer);

printf("[----- [cho min woo] [2019038019] -----]\n");
}
float sum(float list[], int n)         
{
printf("value of list = %p\n", list);
printf("address of list = %p\n\n", &list);      //input의 주소를 list가 받아서 그 배열에 접근
int i;
float tempsum = 0;
for(i = 0; i < n; i++)                          //
tempsum += list[i];                   
return tempsum;
}