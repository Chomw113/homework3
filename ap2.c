#include <stdio.h>
#include <stdlib.h>
void main()
{
int list[5];                 //5개의 정수 저장
int *plist[5];               //정수를 가리키는 포인터
list[0] = 10;
list[1] = 11;
plist[0] = (int*)malloc(sizeof(int));  //메모리 할당
printf("list[0] \t= %d\n", list[0]);
printf("address of list \t= %p\n", list);
printf("address of list[0] \t= %p\n", &list[0]); //list 0을 호출
printf("address of list + 0 \t= %p\n", list+0);  //list + 0이 가리키는 값 반환
printf("address of list + 1 \t= %p\n", list+1);   //list + 1이 가리키는 값 반환
printf("address of list + 2 \t= %p\n", list+2);   //list + 2가 가리키는 값 반환
printf("address of list + 3 \t= %p\n", list+3);   //list + 3이 가리키는 값 반환
printf("address of list + 4 \t= %p\n", list+4);   //list + 4가 가리키는 값 반환
printf("address of list[4] \t= %p\n", &list[4]);  //list 4호출
free(plist[0]);
printf("[----- [cho min woo] [2019038019] -----]\n");
}